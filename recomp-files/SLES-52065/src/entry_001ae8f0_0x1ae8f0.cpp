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

// Function: entry_001ae8f0
// Address: 0x1ae8f0 - 0x1ae9a0
void entry_001ae8f0_0x1ae8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae8f0_0x1ae8f0");
#endif

    switch (ctx->pc) {
        case 0x1ae8fcu: goto label_1ae8fc;
        case 0x1ae948u: goto label_1ae948;
        case 0x1ae950u: goto label_1ae950;
        case 0x1ae960u: goto label_1ae960;
        case 0x1ae968u: goto label_1ae968;
        case 0x1ae978u: goto label_1ae978;
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae990u: goto label_1ae990;
        case 0x1ae998u: goto label_1ae998;
        default: break;
    }

    ctx->pc = 0x1ae8f0u;

    // 0x1ae8f0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1ae8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1ae8f4: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x1AE8F4u;
    SET_GPR_U32(ctx, 31, 0x1AE8FCu);
    ctx->pc = 0x1AE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8F4u;
    // 0x1ae8f8: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF140u, 0x1AE8F4u, 0x1AE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8FCu;
label_1ae8fc:
    // 0x1ae8fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1AE8FCu;
    {
        const bool branch_taken_0x1ae8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8fc) {
            ctx->pc = 0x1AE9A0u;
            return;
        }
    }
    ctx->pc = 0x1AE904u;
    // 0x1ae904: 0xae9106ac  sw          $s1, 0x6AC($s4)
    ctx->pc = 0x1ae904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 17));
    // 0x1ae908: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x1ae908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x1ae90c: 0xae8206b0  sw          $v0, 0x6B0($s4)
    ctx->pc = 0x1ae90cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 2));
    // 0x1ae910: 0x8e8306b0  lw          $v1, 0x6B0($s4)
    ctx->pc = 0x1ae910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
    // 0x1ae914: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1ae914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1ae918: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1ae918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ae91c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae920: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ae924: 0x24440670  addiu       $a0, $v0, 0x670
    ctx->pc = 0x1ae924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    // 0x1ae928: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae92c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae934: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1ae934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ae938: 0x8c620670  lw          $v0, 0x670($v1)
    ctx->pc = 0x1ae938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1ae93c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae940: 0xc06bc44  jal         func_1AF110
    ctx->pc = 0x1AE940u;
    SET_GPR_U32(ctx, 31, 0x1AE948u);
    ctx->pc = 0x1AE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE940u;
    // 0x1ae944: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF110u, 0x1AE940u, 0x1AE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE948u;
label_1ae948:
    // 0x1ae948: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AE948u;
    SET_GPR_U32(ctx, 31, 0x1AE950u);
    ctx->pc = 0x1AE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE948u;
    // 0x1ae94c: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE948u, 0x1AE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE950u;
label_1ae950:
    // 0x1ae950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae954: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1ae958: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AE958u;
    SET_GPR_U32(ctx, 31, 0x1AE960u);
    ctx->pc = 0x1AE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE958u;
    // 0x1ae95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE958u, 0x1AE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE960u;
label_1ae960:
    // 0x1ae960: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AE960u;
    SET_GPR_U32(ctx, 31, 0x1AE968u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE960u, 0x1AE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE968u;
label_1ae968:
    // 0x1ae968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae96c: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1ae970: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AE970u;
    SET_GPR_U32(ctx, 31, 0x1AE978u);
    ctx->pc = 0x1AE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE970u;
    // 0x1ae974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE970u, 0x1AE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE978u;
label_1ae978:
    // 0x1ae978: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AE978u;
    SET_GPR_U32(ctx, 31, 0x1AE980u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE978u, 0x1AE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE980u;
label_1ae980:
    // 0x1ae980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae984: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x1ae984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x1ae988: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AE988u;
    SET_GPR_U32(ctx, 31, 0x1AE990u);
    ctx->pc = 0x1AE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE988u;
    // 0x1ae98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE988u, 0x1AE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE990u;
label_1ae990:
    // 0x1ae990: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AE990u;
    SET_GPR_U32(ctx, 31, 0x1AE998u);
    ctx->pc = 0x1AE994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE990u;
    // 0x1ae994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE990u, 0x1AE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE998u;
label_1ae998:
    // 0x1ae998: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE998u;
    {
        const bool branch_taken_0x1ae998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae998) {
            ctx->pc = 0x1AE9B0u;
            return;
        }
    }
    ctx->pc = 0x1AE9A0u;
}
