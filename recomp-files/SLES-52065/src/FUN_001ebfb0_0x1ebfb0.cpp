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

// Function: FUN_001ebfb0
// Address: 0x1ebfb0 - 0x1ec054
void FUN_001ebfb0_0x1ebfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebfb0_0x1ebfb0");
#endif

    switch (ctx->pc) {
        case 0x1ebfc0u: goto label_1ebfc0;
        default: break;
    }

    ctx->pc = 0x1ebfb0u;

    // 0x1ebfb0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1ebfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1ebfb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ebfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfb8: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x1ebfb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x1ebfbc: 0x0  nop
    ctx->pc = 0x1ebfbcu;
    // NOP
label_1ebfc0:
    // 0x1ebfc0: 0xf  sync
    ctx->pc = 0x1ebfc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebfc4: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x1ebfc4u;
    // CACHE instruction (ignored)
    // 0x1ebfc8: 0xf  sync
    ctx->pc = 0x1ebfc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebfcc: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ebfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ebfd0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ebfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ebfd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ebfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ebfd8: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ebfd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ebfdc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ebfdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ebfe0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBFE0u;
    {
        const bool branch_taken_0x1ebfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfe0) {
            ctx->pc = 0x1EBFFCu;
            goto label_1ebffc;
        }
    }
    ctx->pc = 0x1EBFE8u;
    // 0x1ebfe8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBFE8u;
    {
        const bool branch_taken_0x1ebfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfe8) {
            ctx->pc = 0x1EBFFCu;
            goto label_1ebffc;
        }
    }
    ctx->pc = 0x1EBFF0u;
    // 0x1ebff0: 0xf  sync
    ctx->pc = 0x1ebff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebff4: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x1ebff4u;
    // CACHE instruction (ignored)
    // 0x1ebff8: 0xf  sync
    ctx->pc = 0x1ebff8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ebffc:
    // 0x1ebffc: 0xf  sync
    ctx->pc = 0x1ebffcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec000: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1ec000u;
    // CACHE instruction (ignored)
    // 0x1ec004: 0xf  sync
    ctx->pc = 0x1ec004u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec008: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ec008u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ec00c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ec00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ec010: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ec010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ec014: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ec014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ec018: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ec018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ec01c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC01Cu;
    {
        const bool branch_taken_0x1ec01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec01c) {
            ctx->pc = 0x1EC038u;
            goto label_1ec038;
        }
    }
    ctx->pc = 0x1EC024u;
    // 0x1ec024: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC024u;
    {
        const bool branch_taken_0x1ec024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec024) {
            ctx->pc = 0x1EC038u;
            goto label_1ec038;
        }
    }
    ctx->pc = 0x1EC02Cu;
    // 0x1ec02c: 0xf  sync
    ctx->pc = 0x1ec02cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec030: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x1ec030u;
    // CACHE instruction (ignored)
    // 0x1ec034: 0xf  sync
    ctx->pc = 0x1ec034u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ec038:
    // 0x1ec038: 0xf  sync
    ctx->pc = 0x1ec038u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec03c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1ec03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1ec040: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x1ec040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1ec044: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1EC044u;
    {
        const bool branch_taken_0x1ec044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec044) {
            ctx->pc = 0x1EBFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebfc0;
        }
    }
    ctx->pc = 0x1EC04Cu;
    // 0x1ec04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC054u;
}
