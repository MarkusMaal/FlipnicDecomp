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

// Function: entry_001d11d8
// Address: 0x1d11d8 - 0x1d1230
void entry_001d11d8_0x1d11d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d11d8_0x1d11d8");
#endif

    switch (ctx->pc) {
        case 0x1d1208u: goto label_1d1208;
        case 0x1d1228u: goto label_1d1228;
        default: break;
    }

    ctx->pc = 0x1d11d8u;

    // 0x1d11d8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D11D8u;
    {
        const bool branch_taken_0x1d11d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d11d8) {
            ctx->pc = 0x1D1234u;
            return;
        }
    }
    ctx->pc = 0x1D11E0u;
    // 0x1d11e0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1d11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1d11e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d11e8: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1d11ec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1d11ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1d11f0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d11f4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1d11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1d11f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1d11fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d1200: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1D1200u;
    SET_GPR_U32(ctx, 31, 0x1D1208u);
    ctx->pc = 0x1D1204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1200u;
    // 0x1d1204: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1D1200u, 0x1D1208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1208u;
label_1d1208:
    // 0x1d1208: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d1208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d120c: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D120Cu;
    {
        const bool branch_taken_0x1d120c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D120Cu;
        // 0x1d1210: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d120c) {
            ctx->pc = 0x1D1230u;
            return;
        }
    }
    ctx->pc = 0x1D1214u;
    // 0x1d1214: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d1214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1218: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1d1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1d121c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d1220: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1D1220u;
    SET_GPR_U32(ctx, 31, 0x1D1228u);
    ctx->pc = 0x1D1224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1220u;
    // 0x1d1224: 0x24a53480  addiu       $a1, $a1, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1D1220u, 0x1D1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1228u;
label_1d1228:
    // 0x1d1228: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1D1228u;
    SET_GPR_U32(ctx, 31, 0x1D1230u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1D1228u, 0x1D1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1230u;
}
