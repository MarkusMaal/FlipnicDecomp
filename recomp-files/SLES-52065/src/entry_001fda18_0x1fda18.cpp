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

// Function: entry_001fda18
// Address: 0x1fda18 - 0x1fda88
void entry_001fda18_0x1fda18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fda18_0x1fda18");
#endif

    ctx->pc = 0x1fda18u;

    // 0x1fda18: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x1fda18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1fda1c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x1fda1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x1fda20: 0x1480005d  bnez        $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1FDA20u;
    {
        const bool branch_taken_0x1fda20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA20u;
        // 0x1fda24: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda20) {
            ctx->pc = 0x1FDB98u;
            return;
        }
    }
    ctx->pc = 0x1FDA28u;
    // 0x1fda28: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x1fda28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fda2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FDA2Cu;
    {
        const bool branch_taken_0x1fda2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA2Cu;
        // 0x1fda30: 0x930c2  srl         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda2c) {
            ctx->pc = 0x1FDA88u;
            return;
        }
    }
    ctx->pc = 0x1FDA34u;
    // 0x1fda34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fda38: 0x25a5d9c8  addiu       $a1, $t5, -0x2638
    ctx->pc = 0x1fda38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957512));
    // 0x1fda3c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1fda3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fda40: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1fda40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fda44: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1fda48: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fda4c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1fda4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1fda50: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1fda50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1fda54: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1fda54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1fda58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fda58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fda5c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fda5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fda60: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x1fda60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1fda64: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1fda64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1fda68: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x1fda68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x1fda6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fda6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fda70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fda70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fda74: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1fda74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1fda78: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x1fda78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x1fda7c: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x1fda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x1fda80: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1FDA80u;
    {
        const bool branch_taken_0x1fda80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA80u;
        // 0x1fda84: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda80) {
            ctx->pc = 0x1FDB98u;
            return;
        }
    }
    ctx->pc = 0x1FDA88u;
}
