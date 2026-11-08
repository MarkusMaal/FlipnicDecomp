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

// Function: entry_00102ad4
// Address: 0x102ad4 - 0x102b24
void entry_00102ad4_0x102ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102ad4_0x102ad4");
#endif

    switch (ctx->pc) {
        case 0x102aecu: goto label_102aec;
        case 0x102afcu: goto label_102afc;
        default: break;
    }

    ctx->pc = 0x102ad4u;

label_102ad4:
    // 0x102ad4: 0x0  nop
    ctx->pc = 0x102ad4u;
    // NOP
label_102ad8:
    // 0x102ad8: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x102ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_102adc:
    // 0x102adc: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_102ae0:
    if (ctx->pc == 0x102AE0u) {
        ctx->pc = 0x102AE4u;
        goto label_102ae4;
    }
    ctx->pc = 0x102ADCu;
    {
        const bool branch_taken_0x102adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102adc) {
            ctx->pc = 0x10298Cu;
            return;
        }
    }
    ctx->pc = 0x102AE4u;
label_102ae4:
    // 0x102ae4: 0xc05f58c  jal         func_17D630
label_102ae8:
    if (ctx->pc == 0x102AE8u) {
        ctx->pc = 0x102AECu;
        goto label_102aec;
    }
    ctx->pc = 0x102AE4u;
    SET_GPR_U32(ctx, 31, 0x102AECu);
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x102AE4u, 0x102AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AECu;
label_102aec:
    // 0x102aec: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x102aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_102af0:
    // 0x102af0: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x102af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
label_102af4:
    // 0x102af4: 0x40f809  jalr        $v0
label_102af8:
    if (ctx->pc == 0x102AF8u) {
        ctx->pc = 0x102AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AF4u;
        // 0x102af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AFCu;
        goto label_102afc;
    }
    ctx->pc = 0x102AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102AFCu);
        ctx->pc = 0x102AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AF4u;
        // 0x102af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AF4u, 0x102AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102AFCu;
label_102afc:
    // 0x102afc: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_102b00:
    // 0x102b00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x102b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_102b04:
    // 0x102b04: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x102b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_102b08:
    // 0x102b08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x102b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102b0c:
    // 0x102b0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102b10:
    // 0x102b10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102b14:
    // 0x102b14: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x102b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
label_102b18:
    // 0x102b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102b1c:
    // 0x102b1c: 0x10000053  b           . + 4 + (0x53 << 2)
label_102b20:
    if (ctx->pc == 0x102B20u) {
        ctx->pc = 0x102B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B1Cu;
        // 0x102b20: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B24u;
        goto label_fallthrough_0x102b1c;
    }
    ctx->pc = 0x102B1Cu;
    {
        const bool branch_taken_0x102b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B1Cu;
        // 0x102b20: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b1c) {
            ctx->pc = 0x102C6Cu;
            return;
        }
    }
label_fallthrough_0x102b1c:
    ctx->pc = 0x102B24u;
}
