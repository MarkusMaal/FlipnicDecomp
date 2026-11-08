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

// Function: entry_0014a72c
// Address: 0x14a72c - 0x14a7e0
void entry_0014a72c_0x14a72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a72c_0x14a72c");
#endif

    switch (ctx->pc) {
        case 0x14a77cu: goto label_14a77c;
        default: break;
    }

    ctx->pc = 0x14a72cu;

    // 0x14a72c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x14a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14a730: 0x27a50620  addiu       $a1, $sp, 0x620
    ctx->pc = 0x14a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    // 0x14a734: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x14a734u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a738: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a73c: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x14a73cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a740: 0x27a60600  addiu       $a2, $sp, 0x600
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x14a744: 0x27a705e0  addiu       $a3, $sp, 0x5E0
    ctx->pc = 0x14a744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x14a748: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x14a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x14a74c: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x14a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x14a750: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14a754: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x14a754u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x14a758: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x14a758u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a75c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a75cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a760: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x14a760u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x14a764: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x14a764u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14a768: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a76c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a76cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a770: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x14a770u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x14a774: 0xc052b68  jal         func_14ADA0
    ctx->pc = 0x14A774u;
    SET_GPR_U32(ctx, 31, 0x14A77Cu);
    ctx->pc = 0x14A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A774u;
    // 0x14a778: 0xfce20010  sd          $v0, 0x10($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADA0u, 0x14A774u, 0x14A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A77Cu;
label_14a77c:
    // 0x14a77c: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x14a77cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14a780: 0x14600080  bnez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x14A780u;
    {
        const bool branch_taken_0x14a780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A780u;
        // 0x14a784: 0x234082b  sltu        $at, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a780) {
            ctx->pc = 0x14A984u;
            return;
        }
    }
    ctx->pc = 0x14A788u;
    // 0x14a788: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x14a788u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14a78c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x14A78Cu;
    {
        const bool branch_taken_0x14a78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a78c) {
            ctx->pc = 0x14A830u;
            return;
        }
    }
    ctx->pc = 0x14A794u;
    // 0x14a794: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x14a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x14a798: 0x27a80680  addiu       $t0, $sp, 0x680
    ctx->pc = 0x14a798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
    // 0x14a79c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x14a79cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a7a0: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x14a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x14a7a4: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x14a7a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a7a8: 0x27a60660  addiu       $a2, $sp, 0x660
    ctx->pc = 0x14a7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    // 0x14a7ac: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x14a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    // 0x14a7b0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x14a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x14a7b4: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x14a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a7b8: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x14a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x14a7bc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x14a7bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a7c0: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a7c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a7c4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x14a7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x14a7c8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x14a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14a7cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a7d0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a7d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a7d4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x14a7d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A7D8u;
    {
        const bool branch_taken_0x14a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7D8u;
        // 0x14a7dc: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7d8) {
            ctx->pc = 0x14A800u;
            return;
        }
    }
    ctx->pc = 0x14A7E0u;
}
