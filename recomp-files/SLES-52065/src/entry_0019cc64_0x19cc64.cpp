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

// Function: entry_0019cc64
// Address: 0x19cc64 - 0x19ccec
void entry_0019cc64_0x19cc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc64_0x19cc64");
#endif

    switch (ctx->pc) {
        case 0x19cc8cu: goto label_19cc8c;
        case 0x19ccb8u: goto label_19ccb8;
        case 0x19cce4u: goto label_19cce4;
        default: break;
    }

    ctx->pc = 0x19cc64u;

    // 0x19cc64: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19cc68: 0x8c6306a0  lw          $v1, 0x6A0($v1)
    ctx->pc = 0x19cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1696)));
    // 0x19cc6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19cc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cc74: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19cc78: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x19cc7c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x19CC7Cu;
    {
        const bool branch_taken_0x19cc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc7c) {
            ctx->pc = 0x19CD08u;
            return;
        }
    }
    ctx->pc = 0x19CC84u;
    // 0x19cc84: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x19CC84u;
    SET_GPR_U32(ctx, 31, 0x19CC8Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19CC84u, 0x19CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC8Cu;
label_19cc8c:
    // 0x19cc8c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19cc8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19cc90: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19cc94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19cc94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19cc98: 0x0  nop
    ctx->pc = 0x19cc98u;
    // NOP
    // 0x19cc9c: 0x0  nop
    ctx->pc = 0x19cc9cu;
    // NOP
    // 0x19cca0: 0x1810  mfhi        $v1
    ctx->pc = 0x19cca0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19cca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cca8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19CCA8u;
    {
        const bool branch_taken_0x19cca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19cca8) {
            ctx->pc = 0x19CCECu;
            return;
        }
    }
    ctx->pc = 0x19CCB0u;
    // 0x19ccb0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x19CCB0u;
    SET_GPR_U32(ctx, 31, 0x19CCB8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19CCB0u, 0x19CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCB8u;
label_19ccb8:
    // 0x19ccb8: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19ccb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ccbc: 0x8e460760  lw          $a2, 0x760($s2)
    ctx->pc = 0x19ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1888)));
    // 0x19ccc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ccc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccc8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19ccc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19cccc: 0x26450764  addiu       $a1, $s2, 0x764
    ctx->pc = 0x19ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1892));
    // 0x19ccd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ccd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccd4: 0x1010  mfhi        $v0
    ctx->pc = 0x19ccd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19ccd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19ccdc: 0xc067364  jal         func_19CD90
    ctx->pc = 0x19CCDCu;
    SET_GPR_U32(ctx, 31, 0x19CCE4u);
    ctx->pc = 0x19CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCDCu;
    // 0x19cce0: 0x2c480001  sltiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD90u, 0x19CCDCu, 0x19CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCE4u;
label_19cce4:
    // 0x19cce4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CCE4u;
    {
        const bool branch_taken_0x19cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cce4) {
            ctx->pc = 0x19CD08u;
            return;
        }
    }
    ctx->pc = 0x19CCECu;
}
