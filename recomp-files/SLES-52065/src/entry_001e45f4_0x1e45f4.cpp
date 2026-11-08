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

// Function: entry_001e45f4
// Address: 0x1e45f4 - 0x1e4630
void entry_001e45f4_0x1e45f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45f4_0x1e45f4");
#endif

    switch (ctx->pc) {
        case 0x1e4620u: goto label_1e4620;
        default: break;
    }

    ctx->pc = 0x1e45f4u;

label_1e45f4:
    // 0x1e45f4: 0x0  nop
    ctx->pc = 0x1e45f4u;
    // NOP
label_1e45f8:
    // 0x1e45f8: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1e45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1e45fc:
    // 0x1e45fc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1e45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1e4600:
    // 0x1e4600: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e4600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4604:
    // 0x1e4604: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e4608:
    if (ctx->pc == 0x1E4608u) {
        ctx->pc = 0x1E4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4604u;
        // 0x1e4608: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E460Cu;
        goto label_1e460c;
    }
    ctx->pc = 0x1E4604u;
    {
        const bool branch_taken_0x1e4604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4604u;
        // 0x1e4608: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4604) {
            ctx->pc = 0x1E4630u;
            return;
        }
    }
    ctx->pc = 0x1E460Cu;
label_1e460c:
    // 0x1e460c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e460cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e4610:
    // 0x1e4610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e4610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4614:
    // 0x1e4614: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e4614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e4618:
    // 0x1e4618: 0x320f809  jalr        $t9
label_1e461c:
    if (ctx->pc == 0x1E461Cu) {
        ctx->pc = 0x1E461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4618u;
        // 0x1e461c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4620u;
        goto label_1e4620;
    }
    ctx->pc = 0x1E4618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4620u);
        ctx->pc = 0x1E461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4618u;
        // 0x1e461c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4618u, 0x1E4620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4620u;
label_1e4620:
    // 0x1e4620: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4624:
    // 0x1e4624: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4628:
    if (ctx->pc == 0x1E4628u) {
        ctx->pc = 0x1E462Cu;
        goto label_1e462c;
    }
    ctx->pc = 0x1E4624u;
    {
        const bool branch_taken_0x1e4624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4624) {
            ctx->pc = 0x1E4630u;
            return;
        }
    }
    ctx->pc = 0x1E462Cu;
label_1e462c:
    // 0x1e462c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e462cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e4630u;
}
