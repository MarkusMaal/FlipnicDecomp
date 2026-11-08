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

// Function: entry_00197300
// Address: 0x197300 - 0x197348
void entry_00197300_0x197300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197300_0x197300");
#endif

    switch (ctx->pc) {
        case 0x197310u: goto label_197310;
        case 0x19732cu: goto label_19732c;
        default: break;
    }

    ctx->pc = 0x197300u;

    // 0x197300: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197304: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197308: 0xc064918  jal         func_192460
    ctx->pc = 0x197308u;
    SET_GPR_U32(ctx, 31, 0x197310u);
    ctx->pc = 0x19730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197308u;
    // 0x19730c: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x197308u, 0x197310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197310u;
label_197310:
    // 0x197310: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197314: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197318: 0xaea206d8  sw          $v0, 0x6D8($s5)
    ctx->pc = 0x197318u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1752), GPR_U32(ctx, 2));
    // 0x19731c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197320: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x197324: 0xc064a64  jal         func_192990
    ctx->pc = 0x197324u;
    SET_GPR_U32(ctx, 31, 0x19732Cu);
    ctx->pc = 0x197328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197324u;
    // 0x197328: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x197324u, 0x19732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19732Cu;
label_19732c:
    // 0x19732c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197330: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x197330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x197334: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197334u;
    {
        const bool branch_taken_0x197334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x197338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197334u;
        // 0x197338: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197334) {
            ctx->pc = 0x197348u;
            return;
        }
    }
    ctx->pc = 0x19733Cu;
    // 0x19733c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19733Cu;
    {
        const bool branch_taken_0x19733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19733Cu;
        // 0x197340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19733c) {
            ctx->pc = 0x197360u;
            return;
        }
    }
    ctx->pc = 0x197344u;
    // 0x197344: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x197344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x197348u;
}
