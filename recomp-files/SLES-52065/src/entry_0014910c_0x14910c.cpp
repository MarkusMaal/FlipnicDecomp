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

// Function: entry_0014910c
// Address: 0x14910c - 0x14919c
void entry_0014910c_0x14910c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014910c_0x14910c");
#endif

    switch (ctx->pc) {
        case 0x149114u: goto label_149114;
        default: break;
    }

    ctx->pc = 0x14910cu;

    // 0x14910c: 0xc052340  jal         func_148D00
    ctx->pc = 0x14910Cu;
    SET_GPR_U32(ctx, 31, 0x149114u);
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14910Cu, 0x149114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149114u;
label_149114:
    // 0x149114: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x149114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x149118: 0x27b600fc  addiu       $s6, $sp, 0xFC
    ctx->pc = 0x149118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x14911c: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x14911cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x149120: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x149120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x149124: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x149124u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x149128: 0x27b30104  addiu       $s3, $sp, 0x104
    ctx->pc = 0x149128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x14912c: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x14912cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x149130: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x149130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149134: 0x27a80230  addiu       $t0, $sp, 0x230
    ctx->pc = 0x149134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x149138: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x149138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14913c: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x14913cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x149140: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x149140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149144: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x149144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x149148: 0xafaa00f4  sw          $t2, 0xF4($sp)
    ctx->pc = 0x149148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 10));
    // 0x14914c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x14914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x149150: 0xafa900f8  sw          $t1, 0xF8($sp)
    ctx->pc = 0x149150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 9));
    // 0x149154: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x149154u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    // 0x149158: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x149158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14915c: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x14915cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x149160: 0x8fa70144  lw          $a3, 0x144($sp)
    ctx->pc = 0x149160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x149164: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x149164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x149168: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x149168u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14916c: 0xdca50010  ld          $a1, 0x10($a1)
    ctx->pc = 0x14916cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x149170: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x149170u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x149174: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x149174u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x149178: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x149178u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14917c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14917cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x149180: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x149180u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x149184: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149184u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149188: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14918c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14918cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149190: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x149190u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x149194: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x149194u;
    {
        const bool branch_taken_0x149194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149194u;
        // 0x149198: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149194) {
            ctx->pc = 0x1491BCu;
            return;
        }
    }
    ctx->pc = 0x14919Cu;
}
