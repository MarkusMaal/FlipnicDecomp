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

// Function: entry_001cb300
// Address: 0x1cb300 - 0x1cb354
void entry_001cb300_0x1cb300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb300_0x1cb300");
#endif

    switch (ctx->pc) {
        case 0x1cb310u: goto label_1cb310;
        case 0x1cb324u: goto label_1cb324;
        case 0x1cb334u: goto label_1cb334;
        case 0x1cb33cu: goto label_1cb33c;
        default: break;
    }

    ctx->pc = 0x1cb300u;

label_1cb300:
    // 0x1cb300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb304: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb308: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB308u;
    SET_GPR_U32(ctx, 31, 0x1CB310u);
    ctx->pc = 0x1CB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB308u;
    // 0x1cb30c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB308u, 0x1CB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB310u;
label_1cb310:
    // 0x1cb310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb314: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1cb314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1cb318: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x1cb318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
    // 0x1cb31c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB31Cu;
    SET_GPR_U32(ctx, 31, 0x1CB324u);
    ctx->pc = 0x1CB320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB31Cu;
    // 0x1cb320: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB31Cu, 0x1CB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB324u;
label_1cb324:
    // 0x1cb324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb328: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb32c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB32Cu;
    SET_GPR_U32(ctx, 31, 0x1CB334u);
    ctx->pc = 0x1CB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB32Cu;
    // 0x1cb330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB32Cu, 0x1CB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB334u;
label_1cb334:
    // 0x1cb334: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CB334u;
    SET_GPR_U32(ctx, 31, 0x1CB33Cu);
    ctx->pc = 0x1CB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB334u;
    // 0x1cb338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CB334u, 0x1CB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB33Cu;
label_1cb33c:
    // 0x1cb33c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cb33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cb340: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1cb340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cb344: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CB344u;
    {
        const bool branch_taken_0x1cb344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB344u;
        // 0x1cb348: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb344) {
            ctx->pc = 0x1CB300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb300;
        }
    }
    ctx->pc = 0x1CB34Cu;
    // 0x1cb34c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cb350: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x1cb354u;
}
