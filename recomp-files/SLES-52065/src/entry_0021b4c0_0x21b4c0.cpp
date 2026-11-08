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

// Function: entry_0021b4c0
// Address: 0x21b4c0 - 0x21b530
void entry_0021b4c0_0x21b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b4c0_0x21b4c0");
#endif

    switch (ctx->pc) {
        case 0x21b4d8u: goto label_21b4d8;
        case 0x21b52cu: goto label_21b52c;
        default: break;
    }

    ctx->pc = 0x21b4c0u;

    // 0x21b4c0: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x21B4C0u;
    {
        const bool branch_taken_0x21b4c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x21B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4C0u;
        // 0x21b4c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4c0) {
            ctx->pc = 0x21B530u;
            return;
        }
    }
    ctx->pc = 0x21B4C8u;
    // 0x21b4c8: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x21b4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4d0: 0xc01d816  jal         func_076058
    ctx->pc = 0x21B4D0u;
    SET_GPR_U32(ctx, 31, 0x21B4D8u);
    ctx->pc = 0x21B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B4D0u;
    // 0x21b4d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76058u, 0x21B4D0u, 0x21B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4D8u;
label_21b4d8:
    // 0x21b4d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b4dc: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x21b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
    // 0x21b4e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x21b4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b4e4: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
    // 0x21b4e8: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x21b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    // 0x21b4ec: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x21b4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21b4f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21b4f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x21b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b4f8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x21b4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b4fc: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x21b4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21b500: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x21b500u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x21b504: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x21b504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x21b508: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x21b508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b50c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x21b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x21b510: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x21b510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b514: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x21b514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
    // 0x21b518: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x21b518u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
    // 0x21b51c: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x21b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x21b520: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x21b520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
    // 0x21b524: 0xc01d918  jal         func_076460
    ctx->pc = 0x21B524u;
    SET_GPR_U32(ctx, 31, 0x21B52Cu);
    ctx->pc = 0x21B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B524u;
    // 0x21b528: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x21B524u, 0x21B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B52Cu;
label_21b52c:
    // 0x21b52c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x21b530u;
}
