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

// Function: entry_0017d11c
// Address: 0x17d11c - 0x17d1a4
void entry_0017d11c_0x17d11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d11c_0x17d11c");
#endif

    switch (ctx->pc) {
        case 0x17d134u: goto label_17d134;
        case 0x17d154u: goto label_17d154;
        case 0x17d170u: goto label_17d170;
        case 0x17d190u: goto label_17d190;
        default: break;
    }

    ctx->pc = 0x17d11cu;

    // 0x17d11c: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x17d11cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17d120: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17d124: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17d128: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x17d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17d12c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x17D12Cu;
    SET_GPR_U32(ctx, 31, 0x17D134u);
    ctx->pc = 0x17D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D12Cu;
    // 0x17d130: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x17D12Cu, 0x17D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D134u;
label_17d134:
    // 0x17d134: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d138: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d13c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17d13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d144: 0x24a5d240  addiu       $a1, $a1, -0x2DC0
    ctx->pc = 0x17d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955584));
    // 0x17d148: 0x24c6d250  addiu       $a2, $a2, -0x2DB0
    ctx->pc = 0x17d148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955600));
    // 0x17d14c: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x17D14Cu;
    SET_GPR_U32(ctx, 31, 0x17D154u);
    ctx->pc = 0x17D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D14Cu;
    // 0x17d150: 0x240700c0  addiu       $a3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x17D14Cu, 0x17D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D154u;
label_17d154:
    // 0x17d154: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x17d154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x17d158: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x17d158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17d15c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17d160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17d164: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x17d164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17d168: 0xc040168  jal         func_1005A0
    ctx->pc = 0x17D168u;
    SET_GPR_U32(ctx, 31, 0x17D170u);
    ctx->pc = 0x17D16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D168u;
    // 0x17d16c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x17D168u, 0x17D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D170u;
label_17d170:
    // 0x17d170: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d174: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d178: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17d178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d17c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d180: 0x24a5d240  addiu       $a1, $a1, -0x2DC0
    ctx->pc = 0x17d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955584));
    // 0x17d184: 0x24c6d250  addiu       $a2, $a2, -0x2DB0
    ctx->pc = 0x17d184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955600));
    // 0x17d188: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x17D188u;
    SET_GPR_U32(ctx, 31, 0x17D190u);
    ctx->pc = 0x17D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D188u;
    // 0x17d18c: 0x240700c0  addiu       $a3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x17D188u, 0x17D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D190u;
label_17d190:
    // 0x17d190: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x17d190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x17d194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d198: 0x8e140014  lw          $s4, 0x14($s0)
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17d19c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D19Cu;
    {
        const bool branch_taken_0x17d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D19Cu;
        // 0x17d1a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d19c) {
            ctx->pc = 0x17D1C0u;
            return;
        }
    }
    ctx->pc = 0x17D1A4u;
}
