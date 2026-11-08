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

// Function: entry_00102214
// Address: 0x102214 - 0x102280
void entry_00102214_0x102214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102214_0x102214");
#endif

    switch (ctx->pc) {
        case 0x10223cu: goto label_10223c;
        case 0x102250u: goto label_102250;
        case 0x102258u: goto label_102258;
        case 0x102268u: goto label_102268;
        default: break;
    }

    ctx->pc = 0x102214u;

    // 0x102214: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x102214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10221c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10221cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102220: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x102220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102224: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102228: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10222c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x10222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x102230: 0x24442c00  addiu       $a0, $v0, 0x2C00
    ctx->pc = 0x102230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x102234: 0xc0581b4  jal         func_1606D0
    ctx->pc = 0x102234u;
    SET_GPR_U32(ctx, 31, 0x10223Cu);
    ctx->pc = 0x102238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102234u;
    // 0x102238: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1606D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606D0u, 0x102234u, 0x10223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10223Cu;
label_10223c:
    // 0x10223c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102248: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x102248u;
    SET_GPR_U32(ctx, 31, 0x102250u);
    ctx->pc = 0x10224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102248u;
    // 0x10224c: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x102248u, 0x102250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102250u;
label_102250:
    // 0x102250: 0xc0571c8  jal         func_15C720
    ctx->pc = 0x102250u;
    SET_GPR_U32(ctx, 31, 0x102258u);
    ctx->pc = 0x102254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102250u;
    // 0x102254: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C720u, 0x102250u, 0x102258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102258u;
label_102258:
    // 0x102258: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10225c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10225cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102260: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102260u;
    SET_GPR_U32(ctx, 31, 0x102268u);
    ctx->pc = 0x102264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102260u;
    // 0x102264: 0x24a5e058  addiu       $a1, $a1, -0x1FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102260u, 0x102268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102268u;
label_102268:
    // 0x102268: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x102268u;
    {
        const bool branch_taken_0x102268 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102268) {
            ctx->pc = 0x1022C0u;
            return;
        }
    }
    ctx->pc = 0x102270u;
    // 0x102270: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102270u;
    {
        const bool branch_taken_0x102270 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102270u;
        // 0x102274: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102270) {
            ctx->pc = 0x102280u;
            return;
        }
    }
    ctx->pc = 0x102278u;
    // 0x102278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x102278u;
    {
        const bool branch_taken_0x102278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102278u;
        // 0x10227c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102278) {
            ctx->pc = 0x102298u;
            return;
        }
    }
    ctx->pc = 0x102280u;
}
