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

// Function: entry_00205f60
// Address: 0x205f60 - 0x205fa0
void entry_00205f60_0x205f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205f60_0x205f60");
#endif

    ctx->pc = 0x205f60u;

    // 0x205f60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x205f64: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x205f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205f68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x205f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x205f6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205f70: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x205f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x205f74: 0xa0b10000  sb          $s1, 0x0($a1)
    ctx->pc = 0x205f74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x205f78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x205f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x205f7c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x205f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x205f80: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F80u;
    {
        const bool branch_taken_0x205f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x205f80) {
            ctx->pc = 0x205FA0u;
            return;
        }
    }
    ctx->pc = 0x205F88u;
    // 0x205f88: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x205f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205f8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x205f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x205f90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x205F90u;
    {
        const bool branch_taken_0x205f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F90u;
        // 0x205f94: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f90) {
            ctx->pc = 0x205FB4u;
            return;
        }
    }
    ctx->pc = 0x205F98u;
    // 0x205f98: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F98u;
    {
        const bool branch_taken_0x205f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x205f98) {
            ctx->pc = 0x205F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F98u;
            // 0x205f9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205FB8u;
            return;
        }
    }
    ctx->pc = 0x205FA0u;
}
