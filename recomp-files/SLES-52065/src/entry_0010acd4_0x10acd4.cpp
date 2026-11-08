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

// Function: entry_0010acd4
// Address: 0x10acd4 - 0x10ad30
void entry_0010acd4_0x10acd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010acd4_0x10acd4");
#endif

    switch (ctx->pc) {
        case 0x10ad00u: goto label_10ad00;
        case 0x10ad1cu: goto label_10ad1c;
        default: break;
    }

    ctx->pc = 0x10acd4u;

label_10acd4:
    // 0x10acd4: 0x8e022314  lw          $v0, 0x2314($s0)
    ctx->pc = 0x10acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8980)));
label_10acd8:
    // 0x10acd8: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
label_10acdc:
    if (ctx->pc == 0x10ACDCu) {
        ctx->pc = 0x10ACE0u;
        goto label_10ace0;
    }
    ctx->pc = 0x10ACD8u;
    {
        const bool branch_taken_0x10acd8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x10acd8) {
            ctx->pc = 0x10AD30u;
            return;
        }
    }
    ctx->pc = 0x10ACE0u;
label_10ace0:
    // 0x10ace0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x10ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_10ace4:
    // 0x10ace4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ace8:
    // 0x10ace8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10acec:
    // 0x10acec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_10acf0:
    // 0x10acf0: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x10acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_10acf4:
    // 0x10acf4: 0x8e022318  lw          $v0, 0x2318($s0)
    ctx->pc = 0x10acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8984)));
label_10acf8:
    // 0x10acf8: 0xc0430e8  jal         func_10C3A0
label_10acfc:
    if (ctx->pc == 0x10ACFCu) {
        ctx->pc = 0x10ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACF8u;
        // 0x10acfc: 0xae022314  sw          $v0, 0x2314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD00u;
        goto label_10ad00;
    }
    ctx->pc = 0x10ACF8u;
    SET_GPR_U32(ctx, 31, 0x10AD00u);
    ctx->pc = 0x10ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACF8u;
    // 0x10acfc: 0xae022314  sw          $v0, 0x2314($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3A0u, 0x10ACF8u, 0x10AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD00u;
label_10ad00:
    // 0x10ad00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ad00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ad04:
    // 0x10ad04: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10ad08:
    // 0x10ad08: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x10ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10ad0c:
    // 0x10ad0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10ad0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10ad10:
    // 0x10ad10: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10ad10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10ad14:
    // 0x10ad14: 0xc043160  jal         func_10C580
label_10ad18:
    if (ctx->pc == 0x10AD18u) {
        ctx->pc = 0x10AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD14u;
        // 0x10ad18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD1Cu;
        goto label_10ad1c;
    }
    ctx->pc = 0x10AD14u;
    SET_GPR_U32(ctx, 31, 0x10AD1Cu);
    ctx->pc = 0x10AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD14u;
    // 0x10ad18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C580u, 0x10AD14u, 0x10AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD1Cu;
label_10ad1c:
    // 0x10ad1c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10ad1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10ad20:
    // 0x10ad20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ad24:
    // 0x10ad24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ad24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ad28:
    // 0x10ad28: 0x320f809  jalr        $t9
label_10ad2c:
    if (ctx->pc == 0x10AD2Cu) {
        ctx->pc = 0x10AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD28u;
        // 0x10ad2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD30u;
        goto label_fallthrough_0x10ad28;
    }
    ctx->pc = 0x10AD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10AD30u);
        ctx->pc = 0x10AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD28u;
        // 0x10ad2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD28u, 0x10AD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10ad28:
    ctx->pc = 0x10AD30u;
}
