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

// Function: entry_001fc7d8
// Address: 0x1fc7d8 - 0x1fc830
void entry_001fc7d8_0x1fc7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc7d8_0x1fc7d8");
#endif

    switch (ctx->pc) {
        case 0x1fc7f4u: goto label_1fc7f4;
        case 0x1fc82cu: goto label_1fc82c;
        default: break;
    }

    ctx->pc = 0x1fc7d8u;

    // 0x1fc7d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc7dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FC7DCu;
    {
        const bool branch_taken_0x1fc7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc7dc) {
            ctx->pc = 0x1FC830u;
            return;
        }
    }
    ctx->pc = 0x1FC7E4u;
    // 0x1fc7e4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1fc7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1fc7e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1fc7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1fc7ec: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC7ECu;
    SET_GPR_U32(ctx, 31, 0x1FC7F4u);
    ctx->pc = 0x1FC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7ECu;
    // 0x1fc7f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC7ECu, 0x1FC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7F4u;
label_1fc7f4:
    // 0x1fc7f4: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FC7F4u;
    {
        const bool branch_taken_0x1fc7f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7F4u;
        // 0x1fc7f8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7f4) {
            ctx->pc = 0x1FC830u;
            return;
        }
    }
    ctx->pc = 0x1FC7FCu;
    // 0x1fc7fc: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC7FCu;
    {
        const bool branch_taken_0x1fc7fc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1fc7fc) {
            ctx->pc = 0x1FC830u;
            return;
        }
    }
    ctx->pc = 0x1FC804u;
    // 0x1fc804: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1fc804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc808: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1FC808u;
    {
        const bool branch_taken_0x1fc808 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1FC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC808u;
        // 0x1fc80c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc808) {
            ctx->pc = 0x1FCABCu;
            return;
        }
    }
    ctx->pc = 0x1FC810u;
    // 0x1fc810: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fc810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc814: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc818: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fc81c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1fc81cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1fc820: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fc820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1fc824: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC824u;
    SET_GPR_U32(ctx, 31, 0x1FC82Cu);
    ctx->pc = 0x1FC828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC824u;
    // 0x1fc828: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC824u, 0x1FC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC82Cu;
label_1fc82c:
    // 0x1fc82c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc82cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fc830u;
}
