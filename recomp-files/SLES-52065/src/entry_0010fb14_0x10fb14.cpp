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

// Function: entry_0010fb14
// Address: 0x10fb14 - 0x10fb78
void entry_0010fb14_0x10fb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb14_0x10fb14");
#endif

    switch (ctx->pc) {
        case 0x10fb38u: goto label_10fb38;
        case 0x10fb58u: goto label_10fb58;
        default: break;
    }

    ctx->pc = 0x10fb14u;

label_10fb14:
    // 0x10fb14: 0x92230224  lbu         $v1, 0x224($s1)
    ctx->pc = 0x10fb14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_10fb18:
    // 0x10fb18: 0x31e7c  dsll32      $v1, $v1, 25
    ctx->pc = 0x10fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 25));
label_10fb1c:
    // 0x10fb1c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10fb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_10fb20:
    // 0x10fb20: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_10fb24:
    if (ctx->pc == 0x10FB24u) {
        ctx->pc = 0x10FB28u;
        goto label_10fb28;
    }
    ctx->pc = 0x10FB20u;
    {
        const bool branch_taken_0x10fb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb20) {
            ctx->pc = 0x10FBECu;
            return;
        }
    }
    ctx->pc = 0x10FB28u;
label_10fb28:
    // 0x10fb28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10fb28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10fb2c:
    // 0x10fb2c: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x10fb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_10fb30:
    // 0x10fb30: 0x320f809  jalr        $t9
label_10fb34:
    if (ctx->pc == 0x10FB34u) {
        ctx->pc = 0x10FB38u;
        goto label_10fb38;
    }
    ctx->pc = 0x10FB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10FB38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB30u, 0x10FB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FB38u;
label_10fb38:
    // 0x10fb38: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
label_10fb3c:
    if (ctx->pc == 0x10FB3Cu) {
        ctx->pc = 0x10FB40u;
        goto label_10fb40;
    }
    ctx->pc = 0x10FB38u;
    {
        const bool branch_taken_0x10fb38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x10fb38) {
            ctx->pc = 0x10FB78u;
            return;
        }
    }
    ctx->pc = 0x10FB40u;
label_10fb40:
    // 0x10fb40: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x10fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_10fb44:
    // 0x10fb44: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_10fb48:
    if (ctx->pc == 0x10FB48u) {
        ctx->pc = 0x10FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB44u;
        // 0x10fb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB4Cu;
        goto label_10fb4c;
    }
    ctx->pc = 0x10FB44u;
    {
        const bool branch_taken_0x10fb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB44u;
        // 0x10fb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb44) {
            ctx->pc = 0x10FBECu;
            return;
        }
    }
    ctx->pc = 0x10FB4Cu;
label_10fb4c:
    // 0x10fb4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10fb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10fb50:
    // 0x10fb50: 0xc043da0  jal         func_10F680
label_10fb54:
    if (ctx->pc == 0x10FB54u) {
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB58u;
        goto label_10fb58;
    }
    ctx->pc = 0x10FB50u;
    SET_GPR_U32(ctx, 31, 0x10FB58u);
    ctx->pc = 0x10FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB50u;
    // 0x10fb54: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x10FB50u, 0x10FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB58u;
label_10fb58:
    // 0x10fb58: 0x92250224  lbu         $a1, 0x224($s1)
    ctx->pc = 0x10fb58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_10fb5c:
    // 0x10fb5c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x10fb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_10fb60:
    // 0x10fb60: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x10fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_10fb64:
    // 0x10fb64: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_10fb68:
    // 0x10fb68: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10fb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10fb6c:
    // 0x10fb6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10fb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10fb70:
    // 0x10fb70: 0x1000001e  b           . + 4 + (0x1E << 2)
label_10fb74:
    if (ctx->pc == 0x10FB74u) {
        ctx->pc = 0x10FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB70u;
        // 0x10fb74: 0xa2230224  sb          $v1, 0x224($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB78u;
        goto label_fallthrough_0x10fb70;
    }
    ctx->pc = 0x10FB70u;
    {
        const bool branch_taken_0x10fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB70u;
        // 0x10fb74: 0xa2230224  sb          $v1, 0x224($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb70) {
            ctx->pc = 0x10FBECu;
            return;
        }
    }
label_fallthrough_0x10fb70:
    ctx->pc = 0x10FB78u;
}
