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

// Function: FUN_001cc030
// Address: 0x1cc030 - 0x1cc0d8
void FUN_001cc030_0x1cc030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc030_0x1cc030");
#endif

    switch (ctx->pc) {
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc0a0u: goto label_1cc0a0;
        default: break;
    }

    ctx->pc = 0x1cc030u;

    // 0x1cc030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc034: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc038: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cc03c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cc040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc044: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cc044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc04c: 0x8c30ca84  lw          $s0, -0x357C($at)
    ctx->pc = 0x1cc04cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc050: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1CC050u;
    SET_GPR_U32(ctx, 31, 0x1CC058u);
    ctx->pc = 0x1CC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC050u;
    // 0x1cc054: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1CC050u, 0x1CC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC058u;
label_1cc058:
    // 0x1cc058: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1cc058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cc05c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1cc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1cc060: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1cc060u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cc064: 0x722823  subu        $a1, $v1, $s2
    ctx->pc = 0x1cc064u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1cc068: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1cc068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1cc06c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cc070: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cc074: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1cc074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cc078: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1cc078u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cc07c: 0x490c0  sll         $s2, $a0, 3
    ctx->pc = 0x1cc07cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cc080: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc084: 0x1810  mfhi        $v1
    ctx->pc = 0x1cc084u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cc088: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cc08c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cc090: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cc094: 0xa0430090  sb          $v1, 0x90($v0)
    ctx->pc = 0x1cc094u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cc098: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1CC098u;
    SET_GPR_U32(ctx, 31, 0x1CC0A0u);
    ctx->pc = 0x1CC09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC098u;
    // 0x1cc09c: 0x8c30ca84  lw          $s0, -0x357C($at) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1CC098u, 0x1CC0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC0A0u;
label_1cc0a0:
    // 0x1cc0a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cc0a4: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1cc0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cc0a8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1cc0a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cc0ac: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cc0b0: 0x0  nop
    ctx->pc = 0x1cc0b0u;
    // NOP
    // 0x1cc0b4: 0x2010  mfhi        $a0
    ctx->pc = 0x1cc0b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1cc0b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cc0bc: 0xa0640091  sb          $a0, 0x91($v1)
    ctx->pc = 0x1cc0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 145), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc0c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cc0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc0c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0D0u;
        // 0x1cc0d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC0D8u;
}
