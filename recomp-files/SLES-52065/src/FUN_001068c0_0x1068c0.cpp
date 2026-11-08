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

// Function: FUN_001068c0
// Address: 0x1068c0 - 0x10690c
void FUN_001068c0_0x1068c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001068c0_0x1068c0");
#endif

    switch (ctx->pc) {
        case 0x1068c0u: goto label_1068c0;
        case 0x1068c4u: goto label_1068c4;
        case 0x1068c8u: goto label_1068c8;
        case 0x1068ccu: goto label_1068cc;
        case 0x1068d0u: goto label_1068d0;
        case 0x1068d4u: goto label_1068d4;
        case 0x1068d8u: goto label_1068d8;
        case 0x1068dcu: goto label_1068dc;
        case 0x1068e0u: goto label_1068e0;
        case 0x1068e4u: goto label_1068e4;
        case 0x1068e8u: goto label_1068e8;
        case 0x1068ecu: goto label_1068ec;
        case 0x1068f0u: goto label_1068f0;
        case 0x1068f4u: goto label_1068f4;
        case 0x1068f8u: goto label_1068f8;
        case 0x1068fcu: goto label_1068fc;
        case 0x106900u: goto label_106900;
        case 0x106904u: goto label_106904;
        case 0x106908u: goto label_106908;
        default: break;
    }

    ctx->pc = 0x1068c0u;

label_1068c0:
    // 0x1068c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1068c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1068c4:
    // 0x1068c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1068c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1068c8:
    // 0x1068c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1068c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1068cc:
    // 0x1068cc: 0xc0563cc  jal         func_158F30
label_1068d0:
    if (ctx->pc == 0x1068D0u) {
        ctx->pc = 0x1068D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068CCu;
        // 0x1068d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068D4u;
        goto label_1068d4;
    }
    ctx->pc = 0x1068CCu;
    SET_GPR_U32(ctx, 31, 0x1068D4u);
    ctx->pc = 0x1068D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068CCu;
    // 0x1068d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x1068CCu, 0x1068D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068D4u;
label_1068d4:
    // 0x1068d4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x1068d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1068d8:
    // 0x1068d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1068d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1068dc:
    // 0x1068dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1068dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1068e0:
    // 0x1068e0: 0x320f809  jalr        $t9
label_1068e4:
    if (ctx->pc == 0x1068E4u) {
        ctx->pc = 0x1068E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068E0u;
        // 0x1068e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068E8u;
        goto label_1068e8;
    }
    ctx->pc = 0x1068E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1068E8u);
        ctx->pc = 0x1068E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068E0u;
        // 0x1068e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1068E0u, 0x1068E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1068E8u;
label_1068e8:
    // 0x1068e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1068e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1068ec:
    // 0x1068ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1068ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1068f0:
    // 0x1068f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1068f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1068f4:
    // 0x1068f4: 0xc0425a4  jal         func_109690
label_1068f8:
    if (ctx->pc == 0x1068F8u) {
        ctx->pc = 0x1068F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068F4u;
        // 0x1068f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1068FCu;
        goto label_1068fc;
    }
    ctx->pc = 0x1068F4u;
    SET_GPR_U32(ctx, 31, 0x1068FCu);
    ctx->pc = 0x1068F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068F4u;
    // 0x1068f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1068F4u, 0x1068FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068FCu;
label_1068fc:
    // 0x1068fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1068fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106900:
    // 0x106900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_106904:
    // 0x106904: 0x3e00008  jr          $ra
label_106908:
    if (ctx->pc == 0x106908u) {
        ctx->pc = 0x106908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106904u;
        // 0x106908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10690Cu;
        goto label_fallthrough_0x106904;
    }
    ctx->pc = 0x106904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106904u;
        // 0x106908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106904:
    ctx->pc = 0x10690Cu;
}
