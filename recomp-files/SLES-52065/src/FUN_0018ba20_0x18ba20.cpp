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

// Function: FUN_0018ba20
// Address: 0x18ba20 - 0x18ba74
void FUN_0018ba20_0x18ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ba20_0x18ba20");
#endif

    switch (ctx->pc) {
        case 0x18ba20u: goto label_18ba20;
        case 0x18ba24u: goto label_18ba24;
        case 0x18ba28u: goto label_18ba28;
        case 0x18ba2cu: goto label_18ba2c;
        case 0x18ba30u: goto label_18ba30;
        case 0x18ba34u: goto label_18ba34;
        case 0x18ba38u: goto label_18ba38;
        case 0x18ba3cu: goto label_18ba3c;
        case 0x18ba40u: goto label_18ba40;
        case 0x18ba44u: goto label_18ba44;
        case 0x18ba48u: goto label_18ba48;
        case 0x18ba4cu: goto label_18ba4c;
        case 0x18ba50u: goto label_18ba50;
        case 0x18ba54u: goto label_18ba54;
        case 0x18ba58u: goto label_18ba58;
        case 0x18ba5cu: goto label_18ba5c;
        case 0x18ba60u: goto label_18ba60;
        case 0x18ba64u: goto label_18ba64;
        case 0x18ba68u: goto label_18ba68;
        case 0x18ba6cu: goto label_18ba6c;
        case 0x18ba70u: goto label_18ba70;
        default: break;
    }

    ctx->pc = 0x18ba20u;

label_18ba20:
    // 0x18ba20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18ba24:
    // 0x18ba24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18ba28:
    // 0x18ba28: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x18ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18ba2c:
    // 0x18ba2c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x18ba2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18ba30:
    // 0x18ba30: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x18ba30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_18ba34:
    // 0x18ba34: 0x320f809  jalr        $t9
label_18ba38:
    if (ctx->pc == 0x18BA38u) {
        ctx->pc = 0x18BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA34u;
        // 0x18ba38: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA3Cu;
        goto label_18ba3c;
    }
    ctx->pc = 0x18BA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18BA3Cu);
        ctx->pc = 0x18BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA34u;
        // 0x18ba38: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA34u, 0x18BA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BA3Cu;
label_18ba3c:
    // 0x18ba3c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x18ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18ba40:
    // 0x18ba40: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18ba44:
    // 0x18ba44: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x18ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18ba48:
    // 0x18ba48: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x18ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18ba4c:
    // 0x18ba4c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ba50:
    // 0x18ba50: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x18ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ba54:
    // 0x18ba54: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x18ba54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_18ba58:
    // 0x18ba58: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x18ba58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_18ba5c:
    // 0x18ba5c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x18ba5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_18ba60:
    // 0x18ba60: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_18ba64:
    // 0x18ba64: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x18ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_18ba68:
    // 0x18ba68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ba68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ba6c:
    // 0x18ba6c: 0x3e00008  jr          $ra
label_18ba70:
    if (ctx->pc == 0x18BA70u) {
        ctx->pc = 0x18BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA6Cu;
        // 0x18ba70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA74u;
        goto label_fallthrough_0x18ba6c;
    }
    ctx->pc = 0x18BA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA6Cu;
        // 0x18ba70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18ba6c:
    ctx->pc = 0x18BA74u;
}
