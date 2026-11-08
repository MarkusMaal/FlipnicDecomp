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

// Function: entry_001d5ed8
// Address: 0x1d5ed8 - 0x1d5f10
void entry_001d5ed8_0x1d5ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ed8_0x1d5ed8");
#endif

    ctx->pc = 0x1d5ed8u;

    // 0x1d5ed8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5edc: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1d5edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1d5ee0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1d5ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee4: 0x28650018  slti        $a1, $v1, 0x18
    ctx->pc = 0x1d5ee4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d5ee8: 0x2464ffe8  addiu       $a0, $v1, -0x18
    ctx->pc = 0x1d5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x1d5eec: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x1d5eecu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1d5ef0: 0x693804  sllv        $a3, $t1, $v1
    ctx->pc = 0x1d5ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d5ef4: 0x1423021  addu        $a2, $t2, $v0
    ctx->pc = 0x1d5ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1d5ef8: 0x891804  sllv        $v1, $t1, $a0
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d5efc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5EFCu;
    {
        const bool branch_taken_0x1d5efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EFCu;
        // 0x1d5f00: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5efc) {
            ctx->pc = 0x1D5F10u;
            return;
        }
    }
    ctx->pc = 0x1D5F04u;
    // 0x1d5f04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5F04u;
    {
        const bool branch_taken_0x1d5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F04u;
        // 0x1d5f08: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f04) {
            ctx->pc = 0x1D5F14u;
            return;
        }
    }
    ctx->pc = 0x1D5F0Cu;
    // 0x1d5f0c: 0x0  nop
    ctx->pc = 0x1d5f0cu;
    // NOP
    ctx->pc = 0x1d5f10u;
}
