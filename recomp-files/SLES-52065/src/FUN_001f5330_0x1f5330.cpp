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

// Function: FUN_001f5330
// Address: 0x1f5330 - 0x1f5398
void FUN_001f5330_0x1f5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5330_0x1f5330");
#endif

    switch (ctx->pc) {
        case 0x1f535cu: goto label_1f535c;
        case 0x1f5368u: goto label_1f5368;
        case 0x1f5374u: goto label_1f5374;
        default: break;
    }

    ctx->pc = 0x1f5330u;

    // 0x1f5330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f533c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1f533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1f5340: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f5340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f5344: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1f5344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5348: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f5348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f534c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f534cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5350: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f5354: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1F5354u;
    SET_GPR_U32(ctx, 31, 0x1F535Cu);
    ctx->pc = 0x1F5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5354u;
    // 0x1f5358: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1F5354u, 0x1F535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F535Cu;
label_1f535c:
    // 0x1f535c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5360: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1F5360u;
    SET_GPR_U32(ctx, 31, 0x1F5368u);
    ctx->pc = 0x1F5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5360u;
    // 0x1f5364: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1F5360u, 0x1F5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5368u;
label_1f5368:
    // 0x1f5368: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f5368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f536c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1F536Cu;
    SET_GPR_U32(ctx, 31, 0x1F5374u);
    ctx->pc = 0x1F5370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F536Cu;
    // 0x1f5370: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1F536Cu, 0x1F5374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5374u;
label_1f5374:
    // 0x1f5374: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1f5374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1f5378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f5378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f537c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f537cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5380: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1f5380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5384: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f5384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5388: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f5388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f538c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f538cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5390: 0x807d38e  j           func_1F4E38
    ctx->pc = 0x1F5390u;
    ctx->pc = 0x1F5394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5390u;
    // 0x1f5394: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    MemCopy128_0x1f4e38(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5398u;
}
