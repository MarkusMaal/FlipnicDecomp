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

// Function: entry_001b1328
// Address: 0x1b1328 - 0x1b1390
void entry_001b1328_0x1b1328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1328_0x1b1328");
#endif

    switch (ctx->pc) {
        case 0x1b1338u: goto label_1b1338;
        case 0x1b1340u: goto label_1b1340;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b1388u: goto label_1b1388;
        default: break;
    }

    ctx->pc = 0x1b1328u;

    // 0x1b1328: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1b1328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1b132c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1330: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x1B1330u;
    SET_GPR_U32(ctx, 31, 0x1B1338u);
    ctx->pc = 0x1B1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1330u;
    // 0x1b1334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1B1330u, 0x1B1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1338u;
label_1b1338:
    // 0x1b1338: 0xc06be68  jal         func_1AF9A0
    ctx->pc = 0x1B1338u;
    SET_GPR_U32(ctx, 31, 0x1B1340u);
    ctx->pc = 0x1B133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1338u;
    // 0x1b133c: 0x27848334  addiu       $a0, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x1B1338u, 0x1B1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1340u;
label_1b1340:
    // 0x1b1340: 0x928202f2  lbu         $v0, 0x2F2($s4)
    ctx->pc = 0x1b1340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 754)));
    // 0x1b1344: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1B1344u;
    {
        const bool branch_taken_0x1b1344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1344) {
            ctx->pc = 0x1B14D0u;
            return;
        }
    }
    ctx->pc = 0x1B134Cu;
    // 0x1b134c: 0x8e8602e0  lw          $a2, 0x2E0($s4)
    ctx->pc = 0x1b134cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x1b1350: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b1350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b1354: 0x8e8702e4  lw          $a3, 0x2E4($s4)
    ctx->pc = 0x1b1354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
    // 0x1b1358: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b135c: 0x8e8802e8  lw          $t0, 0x2E8($s4)
    ctx->pc = 0x1b135cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 744)));
    // 0x1b1360: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B1360u;
    SET_GPR_U32(ctx, 31, 0x1B1368u);
    ctx->pc = 0x1B1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1360u;
    // 0x1b1364: 0x24a50c40  addiu       $a1, $a1, 0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B1360u, 0x1B1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1368u;
label_1b1368:
    // 0x1b1368: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b136c: 0x27b6012c  addiu       $s6, $sp, 0x12C
    ctx->pc = 0x1b136cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1b1370: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b1370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x1b1374: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x1b1374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b1378: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1b1378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1b137c: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x1b137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b1380: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1B1380u;
    SET_GPR_U32(ctx, 31, 0x1B1388u);
    ctx->pc = 0x1B1384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1380u;
    // 0x1b1384: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B1380u, 0x1B1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1388u;
label_1b1388:
    // 0x1b1388: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1B1388u;
    {
        const bool branch_taken_0x1b1388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1388u;
        // 0x1b138c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1388) {
            ctx->pc = 0x1B14B8u;
            return;
        }
    }
    ctx->pc = 0x1B1390u;
}
