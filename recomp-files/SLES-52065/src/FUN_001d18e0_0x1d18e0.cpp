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

// Function: FUN_001d18e0
// Address: 0x1d18e0 - 0x1d1954
void FUN_001d18e0_0x1d18e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d18e0_0x1d18e0");
#endif

    ctx->pc = 0x1d18e0u;

    // 0x1d18e0: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x1d18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x1d18e4: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D18E4u;
    {
        const bool branch_taken_0x1d18e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18E4u;
        // 0x1d18e8: 0xa08001e0  sb          $zero, 0x1E0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 480), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18e4) {
            ctx->pc = 0x1D1934u;
            goto label_1d1934;
        }
    }
    ctx->pc = 0x1D18ECu;
    // 0x1d18ec: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x1d18f0: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D18F0u;
    {
        const bool branch_taken_0x1d18f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18F0u;
        // 0x1d18f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18f0) {
            ctx->pc = 0x1D1934u;
            goto label_1d1934;
        }
    }
    ctx->pc = 0x1D18F8u;
    // 0x1d18f8: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D18F8u;
    {
        const bool branch_taken_0x1d18f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d18f8) {
            ctx->pc = 0x1D1934u;
            goto label_1d1934;
        }
    }
    ctx->pc = 0x1D1900u;
    // 0x1d1900: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1900u;
    {
        const bool branch_taken_0x1d1900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1900) {
            ctx->pc = 0x1D1910u;
            goto label_1d1910;
        }
    }
    ctx->pc = 0x1D1908u;
    // 0x1d1908: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1908u;
    {
        const bool branch_taken_0x1d1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1908u;
        // 0x1d190c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1908) {
            ctx->pc = 0x1D1938u;
            goto label_1d1938;
        }
    }
    ctx->pc = 0x1D1910u;
label_1d1910:
    // 0x1d1910: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1d1910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1d1914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1918: 0xa08201e0  sb          $v0, 0x1E0($a0)
    ctx->pc = 0x1d1918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 480), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d191c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d191cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1920: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d1924: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d192c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D192Cu;
    {
        const bool branch_taken_0x1d192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D192Cu;
        // 0x1d1930: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d192c) {
            ctx->pc = 0x1D194Cu;
            goto label_1d194c;
        }
    }
    ctx->pc = 0x1D1934u;
label_1d1934:
    // 0x1d1934: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d1934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d1938:
    // 0x1d1938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d193c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d193cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1940: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1948: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d1948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_1d194c:
    // 0x1d194c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1954u;
}
