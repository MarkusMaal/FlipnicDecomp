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

// Function: entry_0014a680
// Address: 0x14a680 - 0x14a72c
void entry_0014a680_0x14a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a680_0x14a680");
#endif

    switch (ctx->pc) {
        case 0x14a6bcu: goto label_14a6bc;
        case 0x14a6c8u: goto label_14a6c8;
        case 0x14a6d8u: goto label_14a6d8;
        default: break;
    }

    ctx->pc = 0x14a680u;

    // 0x14a680: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14a684: 0x27a40840  addiu       $a0, $sp, 0x840
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
    // 0x14a688: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x14a688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a68c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x14a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x14a690: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a694: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x14a694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x14a698: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a69c: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x14a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x14a6a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a6a4: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x14a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x14a6a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x14a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14a6ac: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x14a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x14a6b0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x14a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14a6b4: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x14A6B4u;
    SET_GPR_U32(ctx, 31, 0x14A6BCu);
    ctx->pc = 0x14A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6B4u;
    // 0x14a6b8: 0xafa20214  sw          $v0, 0x214($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x14A6B4u, 0x14A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6BCu;
label_14a6bc:
    // 0x14a6bc: 0x2912823  subu        $a1, $s4, $s1
    ctx->pc = 0x14a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x14a6c0: 0xc051898  jal         func_146260
    ctx->pc = 0x14A6C0u;
    SET_GPR_U32(ctx, 31, 0x14A6C8u);
    ctx->pc = 0x14A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6C0u;
    // 0x14a6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x14A6C0u, 0x14A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6C8u;
label_14a6c8:
    // 0x14a6c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6cc: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x14a6d0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A6D0u;
    SET_GPR_U32(ctx, 31, 0x14A6D8u);
    ctx->pc = 0x14A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6D0u;
    // 0x14a6d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A6D0u, 0x14A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6D8u;
label_14a6d8:
    // 0x14a6d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x14a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14a6dc: 0x27a5038c  addiu       $a1, $sp, 0x38C
    ctx->pc = 0x14a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 908));
    // 0x14a6e0: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x14a6e4: 0x27a70394  addiu       $a3, $sp, 0x394
    ctx->pc = 0x14a6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
    // 0x14a6e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x14a6ec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14a6f0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14a6f4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x14a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14a6f8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x14a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x14a6fc: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x14a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x14a700: 0x8fa30384  lw          $v1, 0x384($sp)
    ctx->pc = 0x14a700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
    // 0x14a704: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x14a708: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x14a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x14a70c: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x14a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x14a710: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x14a710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x14a714: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a718: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x14a718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x14a71c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a720: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x14a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x14a724: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a728: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x14a728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    ctx->pc = 0x14a72cu;
}
