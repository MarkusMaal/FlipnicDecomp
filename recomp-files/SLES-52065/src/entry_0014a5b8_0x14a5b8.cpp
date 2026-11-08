#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0014a5b8
// Address: 0x14a5b8 - 0x14a680
void entry_0014a5b8_0x14a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a5b8_0x14a5b8");
#endif

    ctx->pc = 0x14a5b8u;

    // 0x14a5b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a5bc: 0x27a301e4  addiu       $v1, $sp, 0x1E4
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x14a5c0: 0x27a601e8  addiu       $a2, $sp, 0x1E8
    ctx->pc = 0x14a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x14a5c4: 0x27a701ec  addiu       $a3, $sp, 0x1EC
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x14a5c8: 0x27a801f0  addiu       $t0, $sp, 0x1F0
    ctx->pc = 0x14a5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14a5cc: 0x27a901f4  addiu       $t1, $sp, 0x1F4
    ctx->pc = 0x14a5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x14a5d0: 0x234202b  sltu        $a0, $s1, $s4
    ctx->pc = 0x14a5d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14a5d4: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x14a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
    // 0x14a5d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14a5dc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14a5e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a5e4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x14a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x14a5e8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x14a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a5ec: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x14a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x14a5f0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a5f4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x14a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x14a5f8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x14a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14a5fc: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A5FCu;
    {
        const bool branch_taken_0x14a5fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5FCu;
        // 0x14a600: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5fc) {
            ctx->pc = 0x14A680u;
            return;
        }
    }
    ctx->pc = 0x14A604u;
    // 0x14a604: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x14a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x14a608: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x14a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x14a60c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x14a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x14a610: 0x27a201c4  addiu       $v0, $sp, 0x1C4
    ctx->pc = 0x14a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x14a614: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a618: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x14a618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x14a61c: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x14a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14a620: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a624: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x14a624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x14a628: 0x27a201cc  addiu       $v0, $sp, 0x1CC
    ctx->pc = 0x14a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x14a62c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a630: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x14a630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x14a634: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x14a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x14a638: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a63c: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x14a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x14a640: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x14a644: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a648: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x14a648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x14a64c: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x14a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x14a650: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x14a654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a658: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x14a658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x14a65c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x14a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a660: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x14a660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x14a664: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a668: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x14a668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x14a66c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a670: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x14a670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x14a674: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a678: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14A678u;
    {
        const bool branch_taken_0x14a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A678u;
        // 0x14a67c: 0xafa20194  sw          $v0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a678) {
            ctx->pc = 0x14A72Cu;
            return;
        }
    }
    ctx->pc = 0x14A680u;
}
