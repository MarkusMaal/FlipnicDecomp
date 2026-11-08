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

// Function: FUN_001e21b0
// Address: 0x1e21b0 - 0x1e2248
void FUN_001e21b0_0x1e21b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e21b0_0x1e21b0");
#endif

    switch (ctx->pc) {
        case 0x1e2218u: goto label_1e2218;
        case 0x1e2230u: goto label_1e2230;
        default: break;
    }

    ctx->pc = 0x1e21b0u;

    // 0x1e21b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e21b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e21b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e21b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e21b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e21bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e21bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e21c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e21c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21c4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E21C4u;
    {
        const bool branch_taken_0x1e21c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21C4u;
        // 0x1e21c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21c4) {
            ctx->pc = 0x1E2230u;
            goto label_1e2230;
        }
    }
    ctx->pc = 0x1E21CCu;
    // 0x1e21cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e21d0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e21d4: 0x2442c0d0  addiu       $v0, $v0, -0x3F30
    ctx->pc = 0x1e21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951120));
    // 0x1e21d8: 0x2463c0dc  addiu       $v1, $v1, -0x3F24
    ctx->pc = 0x1e21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951132));
    // 0x1e21dc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1e21e0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x1e21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1e21e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e21e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e21e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e21ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e21f0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1e21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e21f4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E21F4u;
    {
        const bool branch_taken_0x1e21f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21F4u;
        // 0x1e21f8: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21f4) {
            ctx->pc = 0x1E2218u;
            goto label_1e2218;
        }
    }
    ctx->pc = 0x1E21FCu;
    // 0x1e21fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E21FCu;
    {
        const bool branch_taken_0x1e21fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21FCu;
        // 0x1e2200: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21fc) {
            ctx->pc = 0x1E221Cu;
            goto label_1e221c;
        }
    }
    ctx->pc = 0x1E2204u;
    // 0x1e2204: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e2204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e2208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e220c: 0x2442c0e8  addiu       $v0, $v0, -0x3F18
    ctx->pc = 0x1e220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951144));
    // 0x1e2210: 0xc078548  jal         func_1E1520
    ctx->pc = 0x1E2210u;
    SET_GPR_U32(ctx, 31, 0x1E2218u);
    ctx->pc = 0x1E2214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2210u;
    // 0x1e2214: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1520u, 0x1E2210u, 0x1E2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2218u;
label_1e2218:
    // 0x1e2218: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e2218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e221c:
    // 0x1e221c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e221cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2220: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2220u;
    {
        const bool branch_taken_0x1e2220 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2220u;
        // 0x1e2224: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2220) {
            ctx->pc = 0x1E2234u;
            goto label_1e2234;
        }
    }
    ctx->pc = 0x1E2228u;
    // 0x1e2228: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E2228u;
    SET_GPR_U32(ctx, 31, 0x1E2230u);
    ctx->pc = 0x1E222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2228u;
    // 0x1e222c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2228u, 0x1E2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2230u;
label_1e2230:
    // 0x1e2230: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2234:
    // 0x1e2234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e223c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e223cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2240: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2240u;
        // 0x1e2244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2248u;
}
