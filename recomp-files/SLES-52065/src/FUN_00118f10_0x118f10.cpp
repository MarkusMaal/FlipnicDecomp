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

// Function: FUN_00118f10
// Address: 0x118f10 - 0x118f7c
void FUN_00118f10_0x118f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118f10_0x118f10");
#endif

    switch (ctx->pc) {
        case 0x118f34u: goto label_118f34;
        case 0x118f5cu: goto label_118f5c;
        case 0x118f68u: goto label_118f68;
        default: break;
    }

    ctx->pc = 0x118f10u;

    // 0x118f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x118f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x118f2c: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x118F2Cu;
    SET_GPR_U32(ctx, 31, 0x118F34u);
    ctx->pc = 0x118F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F2Cu;
    // 0x118f30: 0x24a5e5e8  addiu       $a1, $a1, -0x1A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x118F2Cu, 0x118F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F34u;
label_118f34:
    // 0x118f34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x118f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118f3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x118f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x118f40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x118f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118f44: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x118f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x118f48: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x118f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x118f4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x118f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x118f50: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x118f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x118f54: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118F54u;
    SET_GPR_U32(ctx, 31, 0x118F5Cu);
    ctx->pc = 0x118F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F54u;
    // 0x118f58: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118F54u, 0x118F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F5Cu;
label_118f5c:
    // 0x118f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f60: 0xc062c20  jal         func_18B080
    ctx->pc = 0x118F60u;
    SET_GPR_U32(ctx, 31, 0x118F68u);
    ctx->pc = 0x118F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F60u;
    // 0x118f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B080u, 0x118F60u, 0x118F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F68u;
label_118f68:
    // 0x118f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f74: 0x3e00008  jr          $ra
    ctx->pc = 0x118F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F74u;
        // 0x118f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F7Cu;
}
