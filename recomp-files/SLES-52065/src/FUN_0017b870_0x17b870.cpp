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

// Function: FUN_0017b870
// Address: 0x17b870 - 0x17b8bc
void FUN_0017b870_0x17b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b870_0x17b870");
#endif

    switch (ctx->pc) {
        case 0x17b870u: goto label_17b870;
        case 0x17b874u: goto label_17b874;
        case 0x17b878u: goto label_17b878;
        case 0x17b87cu: goto label_17b87c;
        case 0x17b880u: goto label_17b880;
        case 0x17b884u: goto label_17b884;
        case 0x17b888u: goto label_17b888;
        case 0x17b88cu: goto label_17b88c;
        case 0x17b890u: goto label_17b890;
        case 0x17b894u: goto label_17b894;
        case 0x17b898u: goto label_17b898;
        case 0x17b89cu: goto label_17b89c;
        case 0x17b8a0u: goto label_17b8a0;
        case 0x17b8a4u: goto label_17b8a4;
        case 0x17b8a8u: goto label_17b8a8;
        case 0x17b8acu: goto label_17b8ac;
        case 0x17b8b0u: goto label_17b8b0;
        case 0x17b8b4u: goto label_17b8b4;
        case 0x17b8b8u: goto label_17b8b8;
        default: break;
    }

    ctx->pc = 0x17b870u;

label_17b870:
    // 0x17b870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17b874:
    // 0x17b874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17b878:
    // 0x17b878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17b87c:
    // 0x17b87c: 0xa0850220  sb          $a1, 0x220($a0)
    ctx->pc = 0x17b87cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 5));
label_17b880:
    // 0x17b880: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_17b884:
    if (ctx->pc == 0x17B884u) {
        ctx->pc = 0x17B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B880u;
        // 0x17b884: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B888u;
        goto label_17b888;
    }
    ctx->pc = 0x17B880u;
    {
        const bool branch_taken_0x17b880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B880u;
        // 0x17b884: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b880) {
            ctx->pc = 0x17B8ACu;
            goto label_17b8ac;
        }
    }
    ctx->pc = 0x17B888u;
label_17b888:
    // 0x17b888: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b88c:
    // 0x17b88c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17b88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17b890:
    // 0x17b890: 0x320f809  jalr        $t9
label_17b894:
    if (ctx->pc == 0x17B894u) {
        ctx->pc = 0x17B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B890u;
        // 0x17b894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B898u;
        goto label_17b898;
    }
    ctx->pc = 0x17B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B898u);
        ctx->pc = 0x17B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B890u;
        // 0x17b894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B890u, 0x17B898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B898u;
label_17b898:
    // 0x17b898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17b89c:
    // 0x17b89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b8a0:
    // 0x17b8a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b8a4:
    // 0x17b8a4: 0xc0425a4  jal         func_109690
label_17b8a8:
    if (ctx->pc == 0x17B8A8u) {
        ctx->pc = 0x17B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A4u;
        // 0x17b8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B8ACu;
        goto label_17b8ac;
    }
    ctx->pc = 0x17B8A4u;
    SET_GPR_U32(ctx, 31, 0x17B8ACu);
    ctx->pc = 0x17B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8A4u;
    // 0x17b8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B8A4u, 0x17B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8ACu;
label_17b8ac:
    // 0x17b8ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b8b0:
    // 0x17b8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b8b4:
    // 0x17b8b4: 0x3e00008  jr          $ra
label_17b8b8:
    if (ctx->pc == 0x17B8B8u) {
        ctx->pc = 0x17B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8B4u;
        // 0x17b8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B8BCu;
        goto label_fallthrough_0x17b8b4;
    }
    ctx->pc = 0x17B8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8B4u;
        // 0x17b8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b8b4:
    ctx->pc = 0x17B8BCu;
}
