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

// Function: entry_001492f0
// Address: 0x1492f0 - 0x149378
void entry_001492f0_0x1492f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001492f0_0x1492f0");
#endif

    switch (ctx->pc) {
        case 0x1492fcu: goto label_1492fc;
        default: break;
    }

    ctx->pc = 0x1492f0u;

    // 0x1492f0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1492f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1492f4: 0xc052340  jal         func_148D00
    ctx->pc = 0x1492F4u;
    SET_GPR_U32(ctx, 31, 0x1492FCu);
    ctx->pc = 0x1492F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492F4u;
    // 0x1492f8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x1492F4u, 0x1492FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492FCu;
label_1492fc:
    // 0x1492fc: 0x8fad0190  lw          $t5, 0x190($sp)
    ctx->pc = 0x1492fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x149300: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149304: 0x8fac0194  lw          $t4, 0x194($sp)
    ctx->pc = 0x149304u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x149308: 0x27a802b0  addiu       $t0, $sp, 0x2B0
    ctx->pc = 0x149308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x14930c: 0x8fab0198  lw          $t3, 0x198($sp)
    ctx->pc = 0x14930cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x149310: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x149314: 0x8faa019c  lw          $t2, 0x19C($sp)
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x149318: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x14931c: 0x8fa901a0  lw          $t1, 0x1A0($sp)
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x149320: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x149324: 0x8fa701a4  lw          $a3, 0x1A4($sp)
    ctx->pc = 0x149324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x149328: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x149328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x14932c: 0xafad0110  sw          $t5, 0x110($sp)
    ctx->pc = 0x14932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 13));
    // 0x149330: 0xafac0114  sw          $t4, 0x114($sp)
    ctx->pc = 0x149330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 12));
    // 0x149334: 0xafab0118  sw          $t3, 0x118($sp)
    ctx->pc = 0x149334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 11));
    // 0x149338: 0xafaa011c  sw          $t2, 0x11C($sp)
    ctx->pc = 0x149338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 10));
    // 0x14933c: 0xafa90120  sw          $t1, 0x120($sp)
    ctx->pc = 0x14933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 9));
    // 0x149340: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x149340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
    // 0x149344: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x149344u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149348: 0xdca50010  ld          $a1, 0x10($a1)
    ctx->pc = 0x149348u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14934c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x14934cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x149350: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x149350u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x149354: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x149354u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149358: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x149358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14935c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x14935cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x149360: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149360u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149364: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149368: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14936c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14936cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x149370: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x149370u;
    {
        const bool branch_taken_0x149370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149370u;
        // 0x149374: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149370) {
            ctx->pc = 0x14944Cu;
            return;
        }
    }
    ctx->pc = 0x149378u;
}
