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

// Function: entry_001ed880
// Address: 0x1ed880 - 0x1ed8f8
void entry_001ed880_0x1ed880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed880_0x1ed880");
#endif

    switch (ctx->pc) {
        case 0x1ed8ccu: goto label_1ed8cc;
        case 0x1ed8d4u: goto label_1ed8d4;
        default: break;
    }

    ctx->pc = 0x1ed880u;

label_1ed880:
    // 0x1ed880: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ed880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ed884: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed888: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1ed888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1ed88c: 0x0  nop
    ctx->pc = 0x1ed88cu;
    // NOP
    // 0x1ed890: 0x0  nop
    ctx->pc = 0x1ed890u;
    // NOP
    // 0x1ed894: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED894u;
    {
        const bool branch_taken_0x1ed894 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ed894) {
            ctx->pc = 0x1ED880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed880;
        }
    }
    ctx->pc = 0x1ED89Cu;
    // 0x1ed89c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ed89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ed8a0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ed8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ed8a4: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x1ed8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x1ed8a8: 0x2524c800  addiu       $a0, $t1, -0x3800
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952960));
    // 0x1ed8ac: 0x2463d720  addiu       $v1, $v1, -0x28E0
    ctx->pc = 0x1ed8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956832));
    // 0x1ed8b0: 0x2651c7d8  addiu       $s1, $s2, -0x3828
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952920));
    // 0x1ed8b4: 0xad22c800  sw          $v0, -0x3800($t1)
    ctx->pc = 0x1ed8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952960), GPR_U32(ctx, 2));
    // 0x1ed8b8: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1ed8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ed8bc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ed8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ed8c0: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x1ed8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
    // 0x1ed8c4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1ED8C4u;
    SET_GPR_U32(ctx, 31, 0x1ED8CCu);
    ctx->pc = 0x1ED8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED8C4u;
    // 0x1ed8c8: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ED8C4u, 0x1ED8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8CCu;
label_1ed8cc:
    // 0x1ed8cc: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1ED8CCu;
    SET_GPR_U32(ctx, 31, 0x1ED8D4u);
    ctx->pc = 0x1ED8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED8CCu;
    // 0x1ed8d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1ED8CCu, 0x1ED8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8D4u;
label_1ed8d4:
    // 0x1ed8d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ed8d8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1ed8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1ed8dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x1ed8e0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ed8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ed8e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED8E4u;
    {
        const bool branch_taken_0x1ed8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8E4u;
        // 0x1ed8e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8e4) {
            ctx->pc = 0x1ED8F8u;
            return;
        }
    }
    ctx->pc = 0x1ED8ECu;
    // 0x1ed8ec: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1ed8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1ed8f0: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x1ed8f0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 16));
    // 0x1ed8f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1ed8f8u;
}
