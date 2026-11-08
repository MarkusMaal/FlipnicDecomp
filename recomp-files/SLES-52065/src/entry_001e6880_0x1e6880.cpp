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

// Function: entry_001e6880
// Address: 0x1e6880 - 0x1e6914
void entry_001e6880_0x1e6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6880_0x1e6880");
#endif

    switch (ctx->pc) {
        case 0x1e68d4u: goto label_1e68d4;
        case 0x1e68dcu: goto label_1e68dc;
        case 0x1e6908u: goto label_1e6908;
        default: break;
    }

    ctx->pc = 0x1e6880u;

    // 0x1e6880: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x1e6880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x1e6884: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6888: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e6888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e688c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e6890: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1E6890u;
    {
        const bool branch_taken_0x1e6890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6890u;
        // 0x1e6894: 0x27c200a0  addiu       $v0, $fp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6890) {
            ctx->pc = 0x1E69DCu;
            return;
        }
    }
    ctx->pc = 0x1E6898u;
    // 0x1e6898: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e6898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1e689c: 0xafc200b4  sw          $v0, 0xB4($fp)
    ctx->pc = 0x1e689cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 180), GPR_U32(ctx, 2));
    // 0x1e68a0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e68a4: 0x8fc200b4  lw          $v0, 0xB4($fp)
    ctx->pc = 0x1e68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e68a8: 0x24a5c0c0  addiu       $a1, $a1, -0x3F40
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
    // 0x1e68ac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e68acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e68b0: 0x2463c0b0  addiu       $v1, $v1, -0x3F50
    ctx->pc = 0x1e68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951088));
    // 0x1e68b4: 0x24843d30  addiu       $a0, $a0, 0x3D30
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
    // 0x1e68b8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1e68bc: 0x8fc200b4  lw          $v0, 0xB4($fp)
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e68c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e68c4: 0x8fc200b4  lw          $v0, 0xB4($fp)
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e68c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e68cc: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E68CCu;
    SET_GPR_U32(ctx, 31, 0x1E68D4u);
    ctx->pc = 0x1E68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68CCu;
    // 0x1e68d0: 0xafc200bc  sw          $v0, 0xBC($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E68CCu, 0x1E68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68D4u;
label_1e68d4:
    // 0x1e68d4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E68D4u;
    SET_GPR_U32(ctx, 31, 0x1E68DCu);
    ctx->pc = 0x1E68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68D4u;
    // 0x1e68d8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E68D4u, 0x1E68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68DCu;
label_1e68dc:
    // 0x1e68dc: 0x8fc300bc  lw          $v1, 0xBC($fp)
    ctx->pc = 0x1e68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e68e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e68e4: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e68e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e68ec: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e68f0: 0xafdd0084  sw          $sp, 0x84($fp)
    ctx->pc = 0x1e68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
    // 0x1e68f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e68f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E68F8u;
    {
        const bool branch_taken_0x1e68f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E68F8u;
        // 0x1e68fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e68f8) {
            ctx->pc = 0x1E6944u;
            return;
        }
    }
    ctx->pc = 0x1E6900u;
    // 0x1e6900: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E6900u;
    SET_GPR_U32(ctx, 31, 0x1E6908u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E6900u, 0x1E6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6908u;
label_1e6908:
    // 0x1e6908: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6908u;
    {
        const bool branch_taken_0x1e6908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6908u;
        // 0x1e690c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6908) {
            ctx->pc = 0x1E6914u;
            return;
        }
    }
    ctx->pc = 0x1E6910u;
    // 0x1e6910: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e6910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e6914u;
}
