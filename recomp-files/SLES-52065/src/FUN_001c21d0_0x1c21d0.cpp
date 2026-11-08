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

// Function: FUN_001c21d0
// Address: 0x1c21d0 - 0x1c2240
void FUN_001c21d0_0x1c21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c21d0_0x1c21d0");
#endif

    switch (ctx->pc) {
        case 0x1c2204u: goto label_1c2204;
        case 0x1c2210u: goto label_1c2210;
        case 0x1c2228u: goto label_1c2228;
        default: break;
    }

    ctx->pc = 0x1c21d0u;

    // 0x1c21d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c21d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c21d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c21dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c21e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c21e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C21E4u;
    {
        const bool branch_taken_0x1c21e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E4u;
        // 0x1c21e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21e4) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C21ECu;
    // 0x1c21ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c21f0: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c21f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c21f4: 0x2442bb00  addiu       $v0, $v0, -0x4500
    ctx->pc = 0x1c21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949632));
    // 0x1c21f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c21f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c21fc: 0xc0745f8  jal         func_1D17E0
    ctx->pc = 0x1C21FCu;
    SET_GPR_U32(ctx, 31, 0x1C2204u);
    ctx->pc = 0x1C2200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21FCu;
    // 0x1c2200: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17E0u, 0x1C21FCu, 0x1C2204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2204u;
label_1c2204:
    // 0x1c2204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2208: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C2208u;
    SET_GPR_U32(ctx, 31, 0x1C2210u);
    ctx->pc = 0x1C220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2208u;
    // 0x1c220c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C2208u, 0x1C2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2210u;
label_1c2210:
    // 0x1c2210: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c2210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c2214: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c2214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c2218: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2218u;
    {
        const bool branch_taken_0x1c2218 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2218u;
        // 0x1c221c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2218) {
            ctx->pc = 0x1C222Cu;
            goto label_1c222c;
        }
    }
    ctx->pc = 0x1C2220u;
    // 0x1c2220: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C2220u;
    SET_GPR_U32(ctx, 31, 0x1C2228u);
    ctx->pc = 0x1C2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2220u;
    // 0x1c2224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C2220u, 0x1C2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2228u;
label_1c2228:
    // 0x1c2228: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c2228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c222c:
    // 0x1c222c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c222cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2238: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2238u;
        // 0x1c223c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2240u;
}
