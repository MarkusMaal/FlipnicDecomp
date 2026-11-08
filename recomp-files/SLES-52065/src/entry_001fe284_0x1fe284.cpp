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

// Function: entry_001fe284
// Address: 0x1fe284 - 0x1fe2c8
void entry_001fe284_0x1fe284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe284_0x1fe284");
#endif

    switch (ctx->pc) {
        case 0x1fe28cu: goto label_1fe28c;
        case 0x1fe2b0u: goto label_1fe2b0;
        default: break;
    }

    ctx->pc = 0x1fe284u;

label_1fe284:
    // 0x1fe284: 0xc07f4fc  jal         func_1FD3F0
label_1fe288:
    if (ctx->pc == 0x1FE288u) {
        ctx->pc = 0x1FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE284u;
        // 0x1fe288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE28Cu;
        goto label_1fe28c;
    }
    ctx->pc = 0x1FE284u;
    SET_GPR_U32(ctx, 31, 0x1FE28Cu);
    ctx->pc = 0x1FE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE284u;
    // 0x1fe288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE284u, 0x1FE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE28Cu;
label_1fe28c:
    // 0x1fe28c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1fe28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe290:
    // 0x1fe290: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x1fe290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_1fe294:
    // 0x1fe294: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1fe298:
    if (ctx->pc == 0x1FE298u) {
        ctx->pc = 0x1FE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE294u;
        // 0x1fe298: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE29Cu;
        goto label_1fe29c;
    }
    ctx->pc = 0x1FE294u;
    {
        const bool branch_taken_0x1fe294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe294) {
            ctx->pc = 0x1FE298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE294u;
            // 0x1fe298: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE2C8u;
            return;
        }
    }
    ctx->pc = 0x1FE29Cu;
label_1fe29c:
    // 0x1fe29c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fe29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1fe2a0:
    // 0x1fe2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2a4:
    // 0x1fe2a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fe2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fe2a8:
    // 0x1fe2a8: 0x40f809  jalr        $v0
label_1fe2ac:
    if (ctx->pc == 0x1FE2ACu) {
        ctx->pc = 0x1FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2A8u;
        // 0x1fe2ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2B0u;
        goto label_1fe2b0;
    }
    ctx->pc = 0x1FE2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE2B0u);
        ctx->pc = 0x1FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2A8u;
        // 0x1fe2ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2A8u, 0x1FE2B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE2B0u;
label_1fe2b0:
    // 0x1fe2b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2b4:
    // 0x1fe2b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe2b8:
    // 0x1fe2b8: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
label_1fe2bc:
    if (ctx->pc == 0x1FE2BCu) {
        ctx->pc = 0x1FE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2B8u;
        // 0x1fe2bc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2C0u;
        goto label_1fe2c0;
    }
    ctx->pc = 0x1FE2B8u;
    {
        const bool branch_taken_0x1fe2b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe2b8) {
            ctx->pc = 0x1FE2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE2B8u;
            // 0x1fe2bc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE2C8u;
            return;
        }
    }
    ctx->pc = 0x1FE2C0u;
label_1fe2c0:
    // 0x1fe2c0: 0x10000015  b           . + 4 + (0x15 << 2)
label_1fe2c4:
    if (ctx->pc == 0x1FE2C4u) {
        ctx->pc = 0x1FE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2C0u;
        // 0x1fe2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2C8u;
        goto label_fallthrough_0x1fe2c0;
    }
    ctx->pc = 0x1FE2C0u;
    {
        const bool branch_taken_0x1fe2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2C0u;
        // 0x1fe2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2c0) {
            ctx->pc = 0x1FE318u;
            return;
        }
    }
label_fallthrough_0x1fe2c0:
    ctx->pc = 0x1FE2C8u;
}
