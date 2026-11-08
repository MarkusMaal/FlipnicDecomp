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

// Function: entry_0017ba80
// Address: 0x17ba80 - 0x17bae0
void entry_0017ba80_0x17ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba80_0x17ba80");
#endif

    switch (ctx->pc) {
        case 0x17ba80u: goto label_17ba80;
        case 0x17ba84u: goto label_17ba84;
        case 0x17ba88u: goto label_17ba88;
        case 0x17ba8cu: goto label_17ba8c;
        case 0x17ba90u: goto label_17ba90;
        case 0x17ba94u: goto label_17ba94;
        case 0x17ba98u: goto label_17ba98;
        case 0x17ba9cu: goto label_17ba9c;
        case 0x17baa0u: goto label_17baa0;
        case 0x17baa4u: goto label_17baa4;
        case 0x17baa8u: goto label_17baa8;
        case 0x17baacu: goto label_17baac;
        case 0x17bab0u: goto label_17bab0;
        case 0x17bab4u: goto label_17bab4;
        case 0x17bab8u: goto label_17bab8;
        case 0x17babcu: goto label_17babc;
        case 0x17bac0u: goto label_17bac0;
        case 0x17bac4u: goto label_17bac4;
        case 0x17bac8u: goto label_17bac8;
        case 0x17baccu: goto label_17bacc;
        case 0x17bad0u: goto label_17bad0;
        case 0x17bad4u: goto label_17bad4;
        case 0x17bad8u: goto label_17bad8;
        case 0x17badcu: goto label_17badc;
        default: break;
    }

    ctx->pc = 0x17ba80u;

label_17ba80:
    // 0x17ba80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17ba84:
    // 0x17ba84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17ba88:
    // 0x17ba88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ba8c:
    // 0x17ba8c: 0xc0563cc  jal         func_158F30
label_17ba90:
    if (ctx->pc == 0x17BA90u) {
        ctx->pc = 0x17BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA8Cu;
        // 0x17ba90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA94u;
        goto label_17ba94;
    }
    ctx->pc = 0x17BA8Cu;
    SET_GPR_U32(ctx, 31, 0x17BA94u);
    ctx->pc = 0x17BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA8Cu;
    // 0x17ba90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17BA8Cu, 0x17BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA94u;
label_17ba94:
    // 0x17ba94: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x17ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_17ba98:
    // 0x17ba98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17ba9c:
    // 0x17ba9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17baa0:
    // 0x17baa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17baa4:
    // 0x17baa4: 0xc0563cc  jal         func_158F30
label_17baa8:
    if (ctx->pc == 0x17BAA8u) {
        ctx->pc = 0x17BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAA4u;
        // 0x17baa8: 0xa043002b  sb          $v1, 0x2B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAACu;
        goto label_17baac;
    }
    ctx->pc = 0x17BAA4u;
    SET_GPR_U32(ctx, 31, 0x17BAACu);
    ctx->pc = 0x17BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAA4u;
    // 0x17baa8: 0xa043002b  sb          $v1, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17BAA4u, 0x17BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAACu;
label_17baac:
    // 0x17baac: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x17baacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_17bab0:
    // 0x17bab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17bab4:
    // 0x17bab4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x17bab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17bab8:
    // 0x17bab8: 0x80450022  lb          $a1, 0x22($v0)
    ctx->pc = 0x17bab8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_17babc:
    // 0x17babc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17babcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17bac0:
    // 0x17bac0: 0x320f809  jalr        $t9
label_17bac4:
    if (ctx->pc == 0x17BAC4u) {
        ctx->pc = 0x17BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAC0u;
        // 0x17bac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAC8u;
        goto label_17bac8;
    }
    ctx->pc = 0x17BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BAC8u);
        ctx->pc = 0x17BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAC0u;
        // 0x17bac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAC0u, 0x17BAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BAC8u;
label_17bac8:
    // 0x17bac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bacc:
    // 0x17bacc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17baccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17bad0:
    // 0x17bad0: 0x3e00008  jr          $ra
label_17bad4:
    if (ctx->pc == 0x17BAD4u) {
        ctx->pc = 0x17BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAD0u;
        // 0x17bad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAD8u;
        goto label_17bad8;
    }
    ctx->pc = 0x17BAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAD0u;
        // 0x17bad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAD8u;
label_17bad8:
    // 0x17bad8: 0x0  nop
    ctx->pc = 0x17bad8u;
    // NOP
label_17badc:
    // 0x17badc: 0x0  nop
    ctx->pc = 0x17badcu;
    // NOP
    ctx->pc = 0x17bae0u;
}
