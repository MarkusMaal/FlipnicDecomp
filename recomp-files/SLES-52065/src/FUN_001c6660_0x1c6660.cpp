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

// Function: FUN_001c6660
// Address: 0x1c6660 - 0x1c66fc
void FUN_001c6660_0x1c6660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6660_0x1c6660");
#endif

    switch (ctx->pc) {
        case 0x1c6698u: goto label_1c6698;
        case 0x1c66a0u: goto label_1c66a0;
        case 0x1c66a8u: goto label_1c66a8;
        case 0x1c66c8u: goto label_1c66c8;
        case 0x1c66e4u: goto label_1c66e4;
        default: break;
    }

    ctx->pc = 0x1c6660u;

    // 0x1c6660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c6660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c6664: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c6664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c6668: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c666c: 0x24a55960  addiu       $a1, $a1, 0x5960
    ctx->pc = 0x1c666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22880));
    // 0x1c6670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6674: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1c6674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c6678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c667c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1c667cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x215960u));
    // 0x1c6680: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1c6680u;
    { uint32_t bits = FAST_READ32(0x215970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6688: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c668c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c668cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c6690: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1C6690u;
    SET_GPR_U32(ctx, 31, 0x1C6698u);
    ctx->pc = 0x1C6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6690u;
    // 0x1c6694: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1C6690u, 0x1C6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6698u;
label_1c6698:
    // 0x1c6698: 0xc045c84  jal         func_117210
    ctx->pc = 0x1C6698u;
    SET_GPR_U32(ctx, 31, 0x1C66A0u);
    ctx->pc = 0x117210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117210u, 0x1C6698u, 0x1C66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66A0u;
label_1c66a0:
    // 0x1c66a0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1C66A0u;
    SET_GPR_U32(ctx, 31, 0x1C66A8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1C66A0u, 0x1C66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66A8u;
label_1c66a8:
    // 0x1c66a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c66a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c66acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c66b0: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1c66b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c66b4: 0x0  nop
    ctx->pc = 0x1c66b4u;
    // NOP
    // 0x1c66b8: 0x0  nop
    ctx->pc = 0x1c66b8u;
    // NOP
    // 0x1c66bc: 0x8810  mfhi        $s1
    ctx->pc = 0x1c66bcu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c66c0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1C66C0u;
    SET_GPR_U32(ctx, 31, 0x1C66C8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1C66C0u, 0x1C66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66C8u;
label_1c66c8:
    // 0x1c66c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c66cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c66ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c66d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c66d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c66d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66d8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c66dc: 0xc060020  jal         func_180080
    ctx->pc = 0x1C66DCu;
    SET_GPR_U32(ctx, 31, 0x1C66E4u);
    ctx->pc = 0x1C66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66DCu;
    // 0x1c66e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180080u, 0x1C66DCu, 0x1C66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66E4u;
label_1c66e4:
    // 0x1c66e4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c66e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c66e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c66e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c66ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c66ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c66f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c66f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c66f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C66F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66F4u;
        // 0x1c66f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C66F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C66FCu;
}
