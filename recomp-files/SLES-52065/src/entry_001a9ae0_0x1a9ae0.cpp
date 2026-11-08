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

// Function: entry_001a9ae0
// Address: 0x1a9ae0 - 0x1a9b3c
void entry_001a9ae0_0x1a9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9ae0_0x1a9ae0");
#endif

    switch (ctx->pc) {
        case 0x1a9afcu: goto label_1a9afc;
        case 0x1a9b2cu: goto label_1a9b2c;
        default: break;
    }

    ctx->pc = 0x1a9ae0u;

label_1a9ae0:
    // 0x1a9ae0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9ae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9af4: 0xc069bec  jal         func_1A6FB0
    ctx->pc = 0x1A9AF4u;
    SET_GPR_U32(ctx, 31, 0x1A9AFCu);
    ctx->pc = 0x1A9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AF4u;
    // 0x1a9af8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A9AF4u, 0x1A9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AFCu;
label_1a9afc:
    // 0x1a9afc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a9b00: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a9b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a9b04: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A9B04u;
    {
        const bool branch_taken_0x1a9b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b04) {
            ctx->pc = 0x1A9AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9ae0;
        }
    }
    ctx->pc = 0x1A9B0Cu;
    // 0x1a9b0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a9b10: 0x26520054  addiu       $s2, $s2, 0x54
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x1a9b14: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9b18: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1A9B18u;
    {
        const bool branch_taken_0x1a9b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B18u;
        // 0x1a9b1c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b18) {
            ctx->pc = 0x1A9A5Cu;
            return;
        }
    }
    ctx->pc = 0x1A9B20u;
    // 0x1a9b20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b24: 0xc06a894  jal         func_1AA250
    ctx->pc = 0x1A9B24u;
    SET_GPR_U32(ctx, 31, 0x1A9B2Cu);
    ctx->pc = 0x1A9B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B24u;
    // 0x1a9b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA250u, 0x1A9B24u, 0x1A9B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B2Cu;
label_1a9b2c:
    // 0x1a9b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9b30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b34: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A9B34u;
    SET_GPR_U32(ctx, 31, 0x1A9B3Cu);
    ctx->pc = 0x1A9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B34u;
    // 0x1a9b38: 0xa2a206cc  sb          $v0, 0x6CC($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 1740), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9B34u, 0x1A9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B3Cu;
}
