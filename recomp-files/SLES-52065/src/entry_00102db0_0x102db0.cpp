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

// Function: entry_00102db0
// Address: 0x102db0 - 0x102e40
void entry_00102db0_0x102db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102db0_0x102db0");
#endif

    switch (ctx->pc) {
        case 0x102df0u: goto label_102df0;
        case 0x102e08u: goto label_102e08;
        default: break;
    }

    ctx->pc = 0x102db0u;

    // 0x102db0: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102db4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102db8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102dbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102dc0: 0x24a5e0b8  addiu       $a1, $a1, -0x1F48
    ctx->pc = 0x102dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959288));
    // 0x102dc4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x102dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x102dc8: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x102dc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102dcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102dd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x102dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x102dd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102dd8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x102ddc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x102ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102de0: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x102de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x102de4: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x102de4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102de8: 0xc080796  jal         func_201E58
    ctx->pc = 0x102DE8u;
    SET_GPR_U32(ctx, 31, 0x102DF0u);
    ctx->pc = 0x102DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DE8u;
    // 0x102dec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x102DE8u, 0x102DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DF0u;
label_102df0:
    // 0x102df0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x102DF0u;
    {
        const bool branch_taken_0x102df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102df0) {
            ctx->pc = 0x102E40u;
            return;
        }
    }
    ctx->pc = 0x102DF8u;
    // 0x102df8: 0x86850020  lh          $a1, 0x20($s4)
    ctx->pc = 0x102df8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x102dfc: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102e00: 0xc05719c  jal         func_15C670
    ctx->pc = 0x102E00u;
    SET_GPR_U32(ctx, 31, 0x102E08u);
    ctx->pc = 0x102E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E00u;
    // 0x102e04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C670u, 0x102E00u, 0x102E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E08u;
label_102e08:
    // 0x102e08: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102e0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102e10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x102e14: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x102e14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x102e18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x102e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102e1c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x102e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x102e20: 0xac622cd8  sw          $v0, 0x2CD8($v1)
    ctx->pc = 0x102e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 2));
    // 0x102e24: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102e28: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x102e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x102e2c: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x102e30: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x102e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x102e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102e38: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x102E38u;
    {
        const bool branch_taken_0x102e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E38u;
        // 0x102e3c: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e38) {
            ctx->pc = 0x1032ECu;
            return;
        }
    }
    ctx->pc = 0x102E40u;
}
