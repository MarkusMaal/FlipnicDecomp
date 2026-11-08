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

// Function: entry_001fd1a8
// Address: 0x1fd1a8 - 0x1fd1f0
void entry_001fd1a8_0x1fd1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd1a8_0x1fd1a8");
#endif

    switch (ctx->pc) {
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1ccu: goto label_1fd1cc;
        default: break;
    }

    ctx->pc = 0x1fd1a8u;

    // 0x1fd1a8: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FD1A8u;
    {
        const bool branch_taken_0x1fd1a8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1A8u;
        // 0x1fd1ac: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1a8) {
            ctx->pc = 0x1FD1FCu;
            return;
        }
    }
    ctx->pc = 0x1FD1B0u;
    // 0x1fd1b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1b4: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD1B4u;
    SET_GPR_U32(ctx, 31, 0x1FD1BCu);
    ctx->pc = 0x1FD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1B4u;
    // 0x1fd1b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD1B4u, 0x1FD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1BCu;
label_1fd1bc:
    // 0x1fd1bc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1fd1c0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd1c4: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD1C4u;
    SET_GPR_U32(ctx, 31, 0x1FD1CCu);
    ctx->pc = 0x1FD1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1C4u;
    // 0x1fd1c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD1C4u, 0x1FD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1CCu;
label_1fd1cc:
    // 0x1fd1cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1d0: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD1D0u;
    {
        const bool branch_taken_0x1fd1d0 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x1fd1d0) {
            ctx->pc = 0x1FD1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1D0u;
            // 0x1fd1d4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD1F0u;
            return;
        }
    }
    ctx->pc = 0x1FD1D8u;
    // 0x1fd1d8: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1FD1D8u;
    {
        const bool branch_taken_0x1fd1d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1d8) {
            ctx->pc = 0x1FD1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1D8u;
            // 0x1fd1dc: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD33Cu;
            return;
        }
    }
    ctx->pc = 0x1FD1E0u;
    // 0x1fd1e0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1fd1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1fd1e4: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x1FD1E4u;
    {
        const bool branch_taken_0x1fd1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1e4) {
            ctx->pc = 0x1FD1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1E4u;
            // 0x1fd1e8: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD33Cu;
            return;
        }
    }
    ctx->pc = 0x1FD1ECu;
    // 0x1fd1ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fd1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1fd1f0u;
}
