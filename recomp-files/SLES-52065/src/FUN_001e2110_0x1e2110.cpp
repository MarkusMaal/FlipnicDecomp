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

// Function: FUN_001e2110
// Address: 0x1e2110 - 0x1e21a8
void FUN_001e2110_0x1e2110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2110_0x1e2110");
#endif

    switch (ctx->pc) {
        case 0x1e2178u: goto label_1e2178;
        case 0x1e2190u: goto label_1e2190;
        default: break;
    }

    ctx->pc = 0x1e2110u;

    // 0x1e2110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e211c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2124: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E2124u;
    {
        const bool branch_taken_0x1e2124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2124u;
        // 0x1e2128: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2124) {
            ctx->pc = 0x1E2190u;
            goto label_1e2190;
        }
    }
    ctx->pc = 0x1E212Cu;
    // 0x1e212c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e2130: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e2134: 0x2442c100  addiu       $v0, $v0, -0x3F00
    ctx->pc = 0x1e2134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x1e2138: 0x2463c10c  addiu       $v1, $v1, -0x3EF4
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951180));
    // 0x1e213c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e213cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e2140: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1e2140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1e2144: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e2148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e214c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2150: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e2154: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2154u;
    {
        const bool branch_taken_0x1e2154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2154u;
        // 0x1e2158: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2154) {
            ctx->pc = 0x1E2178u;
            goto label_1e2178;
        }
    }
    ctx->pc = 0x1E215Cu;
    // 0x1e215c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E215Cu;
    {
        const bool branch_taken_0x1e215c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E215Cu;
        // 0x1e2160: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e215c) {
            ctx->pc = 0x1E217Cu;
            goto label_1e217c;
        }
    }
    ctx->pc = 0x1E2164u;
    // 0x1e2164: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e2168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e216c: 0x2442c0e8  addiu       $v0, $v0, -0x3F18
    ctx->pc = 0x1e216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951144));
    // 0x1e2170: 0xc078548  jal         func_1E1520
    ctx->pc = 0x1E2170u;
    SET_GPR_U32(ctx, 31, 0x1E2178u);
    ctx->pc = 0x1E2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2170u;
    // 0x1e2174: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1520u, 0x1E2170u, 0x1E2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2178u;
label_1e2178:
    // 0x1e2178: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e217c:
    // 0x1e217c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e217cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2180: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2180u;
    {
        const bool branch_taken_0x1e2180 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2180u;
        // 0x1e2184: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2180) {
            ctx->pc = 0x1E2194u;
            goto label_1e2194;
        }
    }
    ctx->pc = 0x1E2188u;
    // 0x1e2188: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E2188u;
    SET_GPR_U32(ctx, 31, 0x1E2190u);
    ctx->pc = 0x1E218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2188u;
    // 0x1e218c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2188u, 0x1E2190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2190u;
label_1e2190:
    // 0x1e2190: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2194:
    // 0x1e2194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e219c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e219cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e21a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E21A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21A0u;
        // 0x1e21a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E21A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E21A8u;
}
