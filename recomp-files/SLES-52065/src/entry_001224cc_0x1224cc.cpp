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

// Function: entry_001224cc
// Address: 0x1224cc - 0x12251c
void entry_001224cc_0x1224cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001224cc_0x1224cc");
#endif

    switch (ctx->pc) {
        case 0x1224f4u: goto label_1224f4;
        case 0x122514u: goto label_122514;
        default: break;
    }

    ctx->pc = 0x1224ccu;

    // 0x1224cc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1224ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1224d0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1224d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1224d4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1224D4u;
    {
        const bool branch_taken_0x1224d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224D4u;
        // 0x1224d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224d4) {
            ctx->pc = 0x122520u;
            return;
        }
    }
    ctx->pc = 0x1224DCu;
    // 0x1224dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1224dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1224e0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1224e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1224e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1224e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1224e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1224e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1224ec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1224ECu;
    SET_GPR_U32(ctx, 31, 0x1224F4u);
    ctx->pc = 0x1224F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224ECu;
    // 0x1224f0: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1224ECu, 0x1224F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224F4u;
label_1224f4:
    // 0x1224f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1224f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224f8: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1224F8u;
    {
        const bool branch_taken_0x1224f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1224FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224F8u;
        // 0x1224fc: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224f8) {
            ctx->pc = 0x12251Cu;
            return;
        }
    }
    ctx->pc = 0x122500u;
    // 0x122500: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122504: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122508: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12250c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12250Cu;
    SET_GPR_U32(ctx, 31, 0x122514u);
    ctx->pc = 0x122510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12250Cu;
    // 0x122510: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12250Cu, 0x122514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122514u;
label_122514:
    // 0x122514: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122514u;
    SET_GPR_U32(ctx, 31, 0x12251Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122514u, 0x12251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12251Cu;
}
