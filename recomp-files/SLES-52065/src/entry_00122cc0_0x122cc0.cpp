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

// Function: entry_00122cc0
// Address: 0x122cc0 - 0x122d18
void entry_00122cc0_0x122cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122cc0_0x122cc0");
#endif

    switch (ctx->pc) {
        case 0x122cf0u: goto label_122cf0;
        case 0x122d10u: goto label_122d10;
        default: break;
    }

    ctx->pc = 0x122cc0u;

    // 0x122cc0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x122CC0u;
    {
        const bool branch_taken_0x122cc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x122cc0) {
            ctx->pc = 0x122D1Cu;
            return;
        }
    }
    ctx->pc = 0x122CC8u;
    // 0x122cc8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x122cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x122ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122cd0: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x122cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x122cd4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x122cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x122cd8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x122cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x122cdc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x122cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x122ce0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x122ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x122ce4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x122ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122ce8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122CE8u;
    SET_GPR_U32(ctx, 31, 0x122CF0u);
    ctx->pc = 0x122CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CE8u;
    // 0x122cec: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122CE8u, 0x122CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CF0u;
label_122cf0:
    // 0x122cf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x122cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cf4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x122CF4u;
    {
        const bool branch_taken_0x122cf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x122CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CF4u;
        // 0x122cf8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cf4) {
            ctx->pc = 0x122D18u;
            return;
        }
    }
    ctx->pc = 0x122CFCu;
    // 0x122cfc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122d00: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122d04: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122d08: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122D08u;
    SET_GPR_U32(ctx, 31, 0x122D10u);
    ctx->pc = 0x122D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D08u;
    // 0x122d0c: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122D08u, 0x122D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D10u;
label_122d10:
    // 0x122d10: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122D10u;
    SET_GPR_U32(ctx, 31, 0x122D18u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122D10u, 0x122D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D18u;
}
