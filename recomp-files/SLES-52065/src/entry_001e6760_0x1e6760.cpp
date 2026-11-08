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

// Function: entry_001e6760
// Address: 0x1e6760 - 0x1e67f8
void entry_001e6760_0x1e6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6760_0x1e6760");
#endif

    switch (ctx->pc) {
        case 0x1e67b8u: goto label_1e67b8;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e67ecu: goto label_1e67ec;
        default: break;
    }

    ctx->pc = 0x1e6760u;

    // 0x1e6760: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x1e6760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x1e6764: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e6768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e676c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e6770: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1E6770u;
    {
        const bool branch_taken_0x1e6770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6770u;
        // 0x1e6774: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6770) {
            ctx->pc = 0x1E69E0u;
            return;
        }
    }
    ctx->pc = 0x1E6778u;
    // 0x1e6778: 0x27c20090  addiu       $v0, $fp, 0x90
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1e677c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e677cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1e6780: 0xafc200b0  sw          $v0, 0xB0($fp)
    ctx->pc = 0x1e6780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 2));
    // 0x1e6784: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e6788: 0x8fc200b0  lw          $v0, 0xB0($fp)
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e678c: 0x24a5c0c0  addiu       $a1, $a1, -0x3F40
    ctx->pc = 0x1e678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
    // 0x1e6790: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e6790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e6794: 0x2463c0b0  addiu       $v1, $v1, -0x3F50
    ctx->pc = 0x1e6794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951088));
    // 0x1e6798: 0x24843d30  addiu       $a0, $a0, 0x3D30
    ctx->pc = 0x1e6798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
    // 0x1e679c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e679cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1e67a0: 0x8fc200b0  lw          $v0, 0xB0($fp)
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e67a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e67a8: 0x8fc200b0  lw          $v0, 0xB0($fp)
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e67ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e67acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e67b0: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E67B0u;
    SET_GPR_U32(ctx, 31, 0x1E67B8u);
    ctx->pc = 0x1E67B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67B0u;
    // 0x1e67b4: 0xafc200b8  sw          $v0, 0xB8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E67B0u, 0x1E67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67B8u;
label_1e67b8:
    // 0x1e67b8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E67B8u;
    SET_GPR_U32(ctx, 31, 0x1E67C0u);
    ctx->pc = 0x1E67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67B8u;
    // 0x1e67bc: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E67B8u, 0x1E67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67C0u;
label_1e67c0:
    // 0x1e67c0: 0x8fc300b8  lw          $v1, 0xB8($fp)
    ctx->pc = 0x1e67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e67c8: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e67d0: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67d4: 0xafdd0064  sw          $sp, 0x64($fp)
    ctx->pc = 0x1e67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
    // 0x1e67d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e67dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E67DCu;
    {
        const bool branch_taken_0x1e67dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67DCu;
        // 0x1e67e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67dc) {
            ctx->pc = 0x1E6828u;
            return;
        }
    }
    ctx->pc = 0x1E67E4u;
    // 0x1e67e4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E67E4u;
    SET_GPR_U32(ctx, 31, 0x1E67ECu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E67E4u, 0x1E67ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67ECu;
label_1e67ec:
    // 0x1e67ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E67ECu;
    {
        const bool branch_taken_0x1e67ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67ECu;
        // 0x1e67f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67ec) {
            ctx->pc = 0x1E67F8u;
            return;
        }
    }
    ctx->pc = 0x1E67F4u;
    // 0x1e67f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e67f8u;
}
