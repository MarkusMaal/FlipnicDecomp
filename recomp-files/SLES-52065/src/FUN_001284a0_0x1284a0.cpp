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

// Function: FUN_001284a0
// Address: 0x1284a0 - 0x128578
void FUN_001284a0_0x1284a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001284a0_0x1284a0");
#endif

    switch (ctx->pc) {
        case 0x1284b4u: goto label_1284b4;
        case 0x1284f8u: goto label_1284f8;
        case 0x12850cu: goto label_12850c;
        default: break;
    }

    ctx->pc = 0x1284a0u;

    // 0x1284a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1284a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1284a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1284a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1284a8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1284a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1284ac: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x1284ACu;
    SET_GPR_U32(ctx, 31, 0x1284B4u);
    ctx->pc = 0x1284B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284ACu;
    // 0x1284b0: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x1284ACu, 0x1284B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284B4u;
label_1284b4:
    // 0x1284b4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284b8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1284b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1284bc: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x1284bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
    // 0x1284c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1284c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1284c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1284c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1284cc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284d0: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x1284d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x1284d4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284d8: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1284d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x1284dc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284e0: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x1284e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x1284e4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284e8: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1284e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x1284ec: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284f0: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1284F0u;
    SET_GPR_U32(ctx, 31, 0x1284F8u);
    ctx->pc = 0x1284F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284F0u;
    // 0x1284f4: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1284F0u, 0x1284F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284F8u;
label_1284f8:
    // 0x1284f8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1284fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128500: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x128500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x128504: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x128504u;
    SET_GPR_U32(ctx, 31, 0x12850Cu);
    ctx->pc = 0x128508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128504u;
    // 0x128508: 0x244400e0  addiu       $a0, $v0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x128504u, 0x12850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12850Cu;
label_12850c:
    // 0x12850c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128510: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x128510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128514: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x128514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x128518: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12851c: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x12851cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x128520: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128524: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x128524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x128528: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12852c: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x12852cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x128530: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128534: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x128534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x128538: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12853c: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x12853cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x128540: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128544: 0xac430120  sw          $v1, 0x120($v0)
    ctx->pc = 0x128544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
    // 0x128548: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12854c: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x12854cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x128550: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128554: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x128554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x128558: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12855c: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x12855cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x128560: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128564: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x128564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x128568: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12856c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128570: 0x3e00008  jr          $ra
    ctx->pc = 0x128570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128570u;
        // 0x128574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128578u;
}
