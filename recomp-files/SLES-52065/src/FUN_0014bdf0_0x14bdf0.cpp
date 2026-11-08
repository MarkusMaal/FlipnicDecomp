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

// Function: FUN_0014bdf0
// Address: 0x14bdf0 - 0x14be40
void FUN_0014bdf0_0x14bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014bdf0_0x14bdf0");
#endif

    switch (ctx->pc) {
        case 0x14bdf0u: goto label_14bdf0;
        case 0x14bdf4u: goto label_14bdf4;
        case 0x14bdf8u: goto label_14bdf8;
        case 0x14bdfcu: goto label_14bdfc;
        case 0x14be00u: goto label_14be00;
        case 0x14be04u: goto label_14be04;
        case 0x14be08u: goto label_14be08;
        case 0x14be0cu: goto label_14be0c;
        case 0x14be10u: goto label_14be10;
        case 0x14be14u: goto label_14be14;
        case 0x14be18u: goto label_14be18;
        case 0x14be1cu: goto label_14be1c;
        case 0x14be20u: goto label_14be20;
        case 0x14be24u: goto label_14be24;
        case 0x14be28u: goto label_14be28;
        case 0x14be2cu: goto label_14be2c;
        case 0x14be30u: goto label_14be30;
        case 0x14be34u: goto label_14be34;
        case 0x14be38u: goto label_14be38;
        case 0x14be3cu: goto label_14be3c;
        default: break;
    }

    ctx->pc = 0x14bdf0u;

label_14bdf0:
    // 0x14bdf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14bdf4:
    // 0x14bdf4: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
label_14bdf8:
    // 0x14bdf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14bdfc:
    // 0x14bdfc: 0x344214c2  ori         $v0, $v0, 0x14C2
    ctx->pc = 0x14bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5314);
label_14be00:
    // 0x14be00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14be04:
    // 0x14be04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14be04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14be08:
    // 0x14be08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14be08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14be0c:
    // 0x14be0c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_14be10:
    // 0x14be10: 0xc07d428  jal         func_1F50A0
label_14be14:
    if (ctx->pc == 0x14BE14u) {
        ctx->pc = 0x14BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE10u;
        // 0x14be14: 0x248471e0  addiu       $a0, $a0, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE18u;
        goto label_14be18;
    }
    ctx->pc = 0x14BE10u;
    SET_GPR_U32(ctx, 31, 0x14BE18u);
    ctx->pc = 0x14BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE10u;
    // 0x14be14: 0x248471e0  addiu       $a0, $a0, 0x71E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x14BE10u, 0x14BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE18u;
label_14be18:
    // 0x14be18: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x14be18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_14be1c:
    // 0x14be1c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x14be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_14be20:
    // 0x14be20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14be24:
    // 0x14be24: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x14be24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_14be28:
    // 0x14be28: 0x320f809  jalr        $t9
label_14be2c:
    if (ctx->pc == 0x14BE2Cu) {
        ctx->pc = 0x14BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE28u;
        // 0x14be2c: 0x24a571e0  addiu       $a1, $a1, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE30u;
        goto label_14be30;
    }
    ctx->pc = 0x14BE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BE30u);
        ctx->pc = 0x14BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE28u;
        // 0x14be2c: 0x24a571e0  addiu       $a1, $a1, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BE28u, 0x14BE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BE30u;
label_14be30:
    // 0x14be30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14be30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14be34:
    // 0x14be34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14be34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14be38:
    // 0x14be38: 0x3e00008  jr          $ra
label_14be3c:
    if (ctx->pc == 0x14BE3Cu) {
        ctx->pc = 0x14BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE38u;
        // 0x14be3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE40u;
        goto label_fallthrough_0x14be38;
    }
    ctx->pc = 0x14BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE38u;
        // 0x14be3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14be38:
    ctx->pc = 0x14BE40u;
}
