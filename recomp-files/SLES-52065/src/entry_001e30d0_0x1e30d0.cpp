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

// Function: entry_001e30d0
// Address: 0x1e30d0 - 0x1e3164
void entry_001e30d0_0x1e30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e30d0_0x1e30d0");
#endif

    switch (ctx->pc) {
        case 0x1e3124u: goto label_1e3124;
        case 0x1e312cu: goto label_1e312c;
        case 0x1e3138u: goto label_1e3138;
        case 0x1e314cu: goto label_1e314c;
        default: break;
    }

    ctx->pc = 0x1e30d0u;

    // 0x1e30d0: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1e30d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
    // 0x1e30d4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e30d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1e30d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e30d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e30dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e30dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e30e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E30E0u;
    {
        const bool branch_taken_0x1e30e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30E0u;
        // 0x1e30e4: 0x27c20078  addiu       $v0, $fp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30e0) {
            ctx->pc = 0x1E3164u;
            return;
        }
    }
    ctx->pc = 0x1E30E8u;
    // 0x1e30e8: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e30e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1e30ec: 0xafc20088  sw          $v0, 0x88($fp)
    ctx->pc = 0x1e30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 136), GPR_U32(ctx, 2));
    // 0x1e30f0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e30f4: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x1e30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x1e30f8: 0x24a5c0c0  addiu       $a1, $a1, -0x3F40
    ctx->pc = 0x1e30f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
    // 0x1e30fc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e3100: 0x2463c0b0  addiu       $v1, $v1, -0x3F50
    ctx->pc = 0x1e3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951088));
    // 0x1e3104: 0x24843d30  addiu       $a0, $a0, 0x3D30
    ctx->pc = 0x1e3104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
    // 0x1e3108: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e3108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1e310c: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x1e310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x1e3110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e3110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e3114: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x1e3114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x1e3118: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e311c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E311Cu;
    SET_GPR_U32(ctx, 31, 0x1E3124u);
    ctx->pc = 0x1E3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E311Cu;
    // 0x1e3120: 0xafc2008c  sw          $v0, 0x8C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E311Cu, 0x1E3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3124u;
label_1e3124:
    // 0x1e3124: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E3124u;
    SET_GPR_U32(ctx, 31, 0x1E312Cu);
    ctx->pc = 0x1E3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3124u;
    // 0x1e3128: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E3124u, 0x1E312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E312Cu;
label_1e312c:
    // 0x1e312c: 0x8fc4008c  lw          $a0, 0x8C($fp)
    ctx->pc = 0x1e312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x1e3130: 0xc0785e0  jal         func_1E1780
    ctx->pc = 0x1E3130u;
    SET_GPR_U32(ctx, 31, 0x1E3138u);
    ctx->pc = 0x1E3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3130u;
    // 0x1e3134: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1780u, 0x1E3130u, 0x1E3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3138u;
label_1e3138:
    // 0x1e3138: 0x8fc2008c  lw          $v0, 0x8C($fp)
    ctx->pc = 0x1e3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x1e313c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e313cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e3140: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e3140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3144: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E3144u;
    SET_GPR_U32(ctx, 31, 0x1E314Cu);
    ctx->pc = 0x1E3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3144u;
    // 0x1e3148: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E3144u, 0x1E314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E314Cu;
label_1e314c:
    // 0x1e314c: 0x8fc50088  lw          $a1, 0x88($fp)
    ctx->pc = 0x1e314cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x1e3150: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e3150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e3154: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e3154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e3158: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x1e3158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    // 0x1e315c: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E315Cu;
    SET_GPR_U32(ctx, 31, 0x1E3164u);
    ctx->pc = 0x1E3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E315Cu;
    // 0x1e3160: 0x24c61450  addiu       $a2, $a2, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E315Cu, 0x1E3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3164u;
}
