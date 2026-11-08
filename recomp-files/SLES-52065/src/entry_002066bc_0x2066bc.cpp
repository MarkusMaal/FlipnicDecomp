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

// Function: entry_002066bc
// Address: 0x2066bc - 0x206710
void entry_002066bc_0x2066bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002066bc_0x2066bc");
#endif

    ctx->pc = 0x2066bcu;

    // 0x2066bc: 0x1012  mflo        $v0
    ctx->pc = 0x2066bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2066c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2066c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2066c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2066c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2066c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2066cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2066ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2066d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2066d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2066d4: 0x12b3818  mult        $a3, $t1, $t3
    ctx->pc = 0x2066d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2066d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2066d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2066dc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2066dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2066e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2066E0u;
    {
        const bool branch_taken_0x2066e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066e0) {
            ctx->pc = 0x2066E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066E0u;
            // 0x2066e4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206714u;
            return;
        }
    }
    ctx->pc = 0x2066E8u;
    // 0x2066e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2066e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2066ec: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2066ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2066f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2066F0u;
    {
        const bool branch_taken_0x2066f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2066F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066F0u;
        // 0x2066f4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066f0) {
            ctx->pc = 0x206710u;
            return;
        }
    }
    ctx->pc = 0x2066F8u;
    // 0x2066f8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2066f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2066fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2066FCu;
    {
        const bool branch_taken_0x2066fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066fc) {
            ctx->pc = 0x206700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066FCu;
            // 0x206700: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206714u;
            return;
        }
    }
    ctx->pc = 0x206704u;
    // 0x206704: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x206708: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20670c: 0x0  nop
    ctx->pc = 0x20670cu;
    // NOP
    ctx->pc = 0x206710u;
}
