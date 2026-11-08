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

// Function: entry_00199700
// Address: 0x199700 - 0x1997b0
void entry_00199700_0x199700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199700_0x199700");
#endif

    switch (ctx->pc) {
        case 0x199708u: goto label_199708;
        default: break;
    }

    ctx->pc = 0x199700u;

    // 0x199700: 0xc06977c  jal         func_1A5DF0
    ctx->pc = 0x199700u;
    SET_GPR_U32(ctx, 31, 0x199708u);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x199700u, 0x199708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199708u;
label_199708:
    // 0x199708: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x199708u;
    {
        const bool branch_taken_0x199708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199708) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x199710u;
    // 0x199710: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x199714: 0x8e850680  lw          $a1, 0x680($s4)
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x199718: 0x8cc328dc  lw          $v1, 0x28DC($a2)
    ctx->pc = 0x199718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
    // 0x19971c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x19971cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x199720: 0x84c228d8  lh          $v0, 0x28D8($a2)
    ctx->pc = 0x199720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
    // 0x199724: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x199724u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x199728: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x199728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19972c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x199730: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x199730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x199734: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x199734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199738: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x199738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19973c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x199740: 0x2812  mflo        $a1
    ctx->pc = 0x199740u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x199744: 0xdc622818  ld          $v0, 0x2818($v1)
    ctx->pc = 0x199744u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 10264)));
    // 0x199748: 0x2010  mfhi        $a0
    ctx->pc = 0x199748u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x19974c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x199750: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x199750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x199754: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x199754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x199758: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x199758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x19975c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x19975cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x199760: 0xfc622818  sd          $v0, 0x2818($v1)
    ctx->pc = 0x199760u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 10264), GPR_U64(ctx, 2));
    // 0x199764: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x199764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x199768: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x19976c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19976Cu;
    {
        const bool branch_taken_0x19976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19976c) {
            ctx->pc = 0x1997B0u;
            return;
        }
    }
    ctx->pc = 0x199774u;
    // 0x199774: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x199774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x199778: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x199778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
    // 0x19977c: 0x84c228d8  lh          $v0, 0x28D8($a2)
    ctx->pc = 0x19977cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
    // 0x199780: 0x51978  dsll        $v1, $a1, 5
    ctx->pc = 0x199780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 5);
    // 0x199784: 0x65202f  dsubu       $a0, $v1, $a1
    ctx->pc = 0x199784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
    // 0x199788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x199788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19978c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x199790: 0x410b8  dsll        $v0, $a0, 2
    ctx->pc = 0x199790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 2);
    // 0x199794: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x199794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x199798: 0xdc622818  ld          $v0, 0x2818($v1)
    ctx->pc = 0x199798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 10264)));
    // 0x19979c: 0x52138  dsll        $a0, $a1, 4
    ctx->pc = 0x19979cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 4);
    // 0x1997a0: 0x85202f  dsubu       $a0, $a0, $a1
    ctx->pc = 0x1997a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
    // 0x1997a4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x1997a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x1997a8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1997a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1997ac: 0xfc622818  sd          $v0, 0x2818($v1)
    ctx->pc = 0x1997acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 10264), GPR_U64(ctx, 2));
    ctx->pc = 0x1997b0u;
}
