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

// Function: entry_001d558c
// Address: 0x1d558c - 0x1d55e8
void entry_001d558c_0x1d558c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d558c_0x1d558c");
#endif

    ctx->pc = 0x1d558cu;

    // 0x1d558c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d5590: 0x24630548  addiu       $v1, $v1, 0x548
    ctx->pc = 0x1d5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1352));
    // 0x1d5594: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d5594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d559c: 0x24a50548  addiu       $a1, $a1, 0x548
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
    // 0x1d55a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d55a4: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x1d55a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d55a8: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
    ctx->pc = 0x1D55A8u;
    {
        const bool branch_taken_0x1d55a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55A8u;
        // 0x1d55ac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55a8) {
            ctx->pc = 0x1D5360u;
            return;
        }
    }
    ctx->pc = 0x1D55B0u;
    // 0x1d55b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d55b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D55B4u;
    {
        const bool branch_taken_0x1d55b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55B4u;
        // 0x1d55b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55b4) {
            ctx->pc = 0x1D55E8u;
            return;
        }
    }
    ctx->pc = 0x1D55BCu;
    // 0x1d55bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d55bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d55c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d55c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d55c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d55c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d55c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d55c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d55cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d55ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d55d0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d55d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d55d4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d55d8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d55d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d55dc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d55dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d55e0: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D55E0u;
    ctx->pc = 0x1D55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55E0u;
    // 0x1d55e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D55E8u;
}
