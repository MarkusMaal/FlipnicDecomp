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

// Function: entry_001e3594
// Address: 0x1e3594 - 0x1e35d0
void entry_001e3594_0x1e3594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3594_0x1e3594");
#endif

    switch (ctx->pc) {
        case 0x1e35c0u: goto label_1e35c0;
        default: break;
    }

    ctx->pc = 0x1e3594u;

label_1e3594:
    // 0x1e3594: 0x0  nop
    ctx->pc = 0x1e3594u;
    // NOP
label_1e3598:
    // 0x1e3598: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1e3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1e359c:
    // 0x1e359c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1e359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1e35a0:
    // 0x1e35a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e35a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e35a4:
    // 0x1e35a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e35a8:
    if (ctx->pc == 0x1E35A8u) {
        ctx->pc = 0x1E35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35A4u;
        // 0x1e35a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35ACu;
        goto label_1e35ac;
    }
    ctx->pc = 0x1E35A4u;
    {
        const bool branch_taken_0x1e35a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35A4u;
        // 0x1e35a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35a4) {
            ctx->pc = 0x1E35D0u;
            return;
        }
    }
    ctx->pc = 0x1E35ACu;
label_1e35ac:
    // 0x1e35ac: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e35acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e35b0:
    // 0x1e35b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e35b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e35b4:
    // 0x1e35b4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e35b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e35b8:
    // 0x1e35b8: 0x320f809  jalr        $t9
label_1e35bc:
    if (ctx->pc == 0x1E35BCu) {
        ctx->pc = 0x1E35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35B8u;
        // 0x1e35bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35C0u;
        goto label_1e35c0;
    }
    ctx->pc = 0x1E35B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E35C0u);
        ctx->pc = 0x1E35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35B8u;
        // 0x1e35bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E35B8u, 0x1E35C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E35C0u;
label_1e35c0:
    // 0x1e35c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e35c4:
    // 0x1e35c4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e35c8:
    if (ctx->pc == 0x1E35C8u) {
        ctx->pc = 0x1E35CCu;
        goto label_1e35cc;
    }
    ctx->pc = 0x1E35C4u;
    {
        const bool branch_taken_0x1e35c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e35c4) {
            ctx->pc = 0x1E35D0u;
            return;
        }
    }
    ctx->pc = 0x1E35CCu;
label_1e35cc:
    // 0x1e35cc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e35ccu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e35d0u;
}
