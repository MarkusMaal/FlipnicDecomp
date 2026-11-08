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

// Function: entry_001028fc
// Address: 0x1028fc - 0x10298c
void entry_001028fc_0x1028fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001028fc_0x1028fc");
#endif

    switch (ctx->pc) {
        case 0x102904u: goto label_102904;
        case 0x102934u: goto label_102934;
        case 0x102954u: goto label_102954;
        case 0x102964u: goto label_102964;
        default: break;
    }

    ctx->pc = 0x1028fcu;

label_1028fc:
    // 0x1028fc: 0xc05f58c  jal         func_17D630
label_102900:
    if (ctx->pc == 0x102900u) {
        ctx->pc = 0x102904u;
        goto label_102904;
    }
    ctx->pc = 0x1028FCu;
    SET_GPR_U32(ctx, 31, 0x102904u);
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x1028FCu, 0x102904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102904u;
label_102904:
    // 0x102904: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102908:
    // 0x102908: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10290c:
    // 0x10290c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102910:
    // 0x102910: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x102910u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
label_102914:
    // 0x102914: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x102914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102918:
    // 0x102918: 0x24e7dd40  addiu       $a3, $a3, -0x22C0
    ctx->pc = 0x102918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958400));
label_10291c:
    // 0x10291c: 0x8c822c1c  lw          $v0, 0x2C1C($a0)
    ctx->pc = 0x10291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_102920:
    // 0x102920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102924:
    // 0x102924: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x102924u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_102928:
    // 0x102928: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x102928u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_10292c:
    // 0x10292c: 0xe0f809  jalr        $a3
label_102930:
    if (ctx->pc == 0x102930u) {
        ctx->pc = 0x102930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10292Cu;
        // 0x102930: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102934u;
        goto label_102934;
    }
    ctx->pc = 0x10292Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x102934u);
        ctx->pc = 0x102930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10292Cu;
        // 0x102930: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10292Cu, 0x102934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102934u;
label_102934:
    // 0x102934: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x102934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102938:
    // 0x102938: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10293c:
    // 0x10293c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_102940:
    // 0x102940: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102944:
    // 0x102944: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x102944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_102948:
    // 0x102948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10294c:
    // 0x10294c: 0xc05f58c  jal         func_17D630
label_102950:
    if (ctx->pc == 0x102950u) {
        ctx->pc = 0x102950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10294Cu;
        // 0x102950: 0xac500030  sw          $s0, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102954u;
        goto label_102954;
    }
    ctx->pc = 0x10294Cu;
    SET_GPR_U32(ctx, 31, 0x102954u);
    ctx->pc = 0x102950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10294Cu;
    // 0x102950: 0xac500030  sw          $s0, 0x30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x10294Cu, 0x102954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102954u;
label_102954:
    // 0x102954: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102958:
    // 0x102958: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x102958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
label_10295c:
    // 0x10295c: 0x40f809  jalr        $v0
label_102960:
    if (ctx->pc == 0x102960u) {
        ctx->pc = 0x102960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10295Cu;
        // 0x102960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102964u;
        goto label_102964;
    }
    ctx->pc = 0x10295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102964u);
        ctx->pc = 0x102960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10295Cu;
        // 0x102960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10295Cu, 0x102964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102964u;
label_102964:
    // 0x102964: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102968:
    // 0x102968: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10296c:
    // 0x10296c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102970:
    // 0x102970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x102970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102974:
    // 0x102974: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102978:
    // 0x102978: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10297c:
    // 0x10297c: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x10297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_102980:
    // 0x102980: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102984:
    // 0x102984: 0x10000053  b           . + 4 + (0x53 << 2)
label_102988:
    if (ctx->pc == 0x102988u) {
        ctx->pc = 0x102988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102984u;
        // 0x102988: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10298Cu;
        goto label_fallthrough_0x102984;
    }
    ctx->pc = 0x102984u;
    {
        const bool branch_taken_0x102984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102984u;
        // 0x102988: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102984) {
            ctx->pc = 0x102AD4u;
            return;
        }
    }
label_fallthrough_0x102984:
    ctx->pc = 0x10298Cu;
}
