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

// Function: entry_001fe4a0
// Address: 0x1fe4a0 - 0x1fe4e8
void entry_001fe4a0_0x1fe4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe4a0_0x1fe4a0");
#endif

    switch (ctx->pc) {
        case 0x1fe4c4u: goto label_1fe4c4;
        case 0x1fe4d8u: goto label_1fe4d8;
        default: break;
    }

    ctx->pc = 0x1fe4a0u;

    // 0x1fe4a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe4a4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1fe4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fe4a8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1fe4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fe4ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE4ACu;
    {
        const bool branch_taken_0x1fe4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4ac) {
            ctx->pc = 0x1FE4E8u;
            return;
        }
    }
    ctx->pc = 0x1FE4B4u;
    // 0x1fe4b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE4B4u;
    {
        const bool branch_taken_0x1fe4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B4u;
        // 0x1fe4b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4b4) {
            ctx->pc = 0x1FE4E8u;
            return;
        }
    }
    ctx->pc = 0x1FE4BCu;
    // 0x1fe4bc: 0xc07fe2a  jal         func_1FF8A8
    ctx->pc = 0x1FE4BCu;
    SET_GPR_U32(ctx, 31, 0x1FE4C4u);
    ctx->pc = 0x1FE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4BCu;
    // 0x1fe4c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE4BCu, 0x1FE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4C4u;
label_1fe4c4:
    // 0x1fe4c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fe4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fe4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe4d0: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1FE4D0u;
    SET_GPR_U32(ctx, 31, 0x1FE4D8u);
    ctx->pc = 0x1FE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4D0u;
    // 0x1fe4d4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE4D0u, 0x1FE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4D8u;
label_1fe4d8:
    // 0x1fe4d8: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x1FE4D8u;
    {
        const bool branch_taken_0x1fe4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4d8) {
            ctx->pc = 0x1FE4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE4D8u;
            // 0x1fe4dc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6C8u;
            return;
        }
    }
    ctx->pc = 0x1FE4E0u;
    // 0x1fe4e0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE4E0u;
    {
        const bool branch_taken_0x1fe4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4E0u;
        // 0x1fe4e4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4e0) {
            ctx->pc = 0x1FE54Cu;
            return;
        }
    }
    ctx->pc = 0x1FE4E8u;
}
