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

// Function: entry_001c1908
// Address: 0x1c1908 - 0x1c1a00
void entry_001c1908_0x1c1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1908_0x1c1908");
#endif

    switch (ctx->pc) {
        case 0x1c1920u: goto label_1c1920;
        case 0x1c1934u: goto label_1c1934;
        case 0x1c1944u: goto label_1c1944;
        case 0x1c1954u: goto label_1c1954;
        case 0x1c1964u: goto label_1c1964;
        case 0x1c1974u: goto label_1c1974;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c198cu: goto label_1c198c;
        case 0x1c19a0u: goto label_1c19a0;
        case 0x1c19b4u: goto label_1c19b4;
        case 0x1c19ccu: goto label_1c19cc;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19f0u: goto label_1c19f0;
        default: break;
    }

    ctx->pc = 0x1c1908u;

    // 0x1c1908: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c190c: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c190cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1910: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C1910u;
    {
        const bool branch_taken_0x1c1910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1910u;
        // 0x1c1914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1910) {
            ctx->pc = 0x1C1A00u;
            return;
        }
    }
    ctx->pc = 0x1C1918u;
    // 0x1c1918: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1918u;
    SET_GPR_U32(ctx, 31, 0x1C1920u);
    ctx->pc = 0x1C191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1918u;
    // 0x1c191c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1918u, 0x1C1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1920u;
label_1c1920:
    // 0x1c1920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c192c: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1C192Cu;
    SET_GPR_U32(ctx, 31, 0x1C1934u);
    ctx->pc = 0x1C1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C192Cu;
    // 0x1c1930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1C192Cu, 0x1C1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1934u;
label_1c1934:
    // 0x1c1934: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c1934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c1938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c193c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C193Cu;
    SET_GPR_U32(ctx, 31, 0x1C1944u);
    ctx->pc = 0x1C1940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C193Cu;
    // 0x1c1940: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C193Cu, 0x1C1944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1944u;
label_1c1944:
    // 0x1c1944: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c194c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C194Cu;
    SET_GPR_U32(ctx, 31, 0x1C1954u);
    ctx->pc = 0x1C1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C194Cu;
    // 0x1c1950: 0x24a54a60  addiu       $a1, $a1, 0x4A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C194Cu, 0x1C1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1954u;
label_1c1954:
    // 0x1c1954: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c1954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c195c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C195Cu;
    SET_GPR_U32(ctx, 31, 0x1C1964u);
    ctx->pc = 0x1C1960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C195Cu;
    // 0x1c1960: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C195Cu, 0x1C1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1964u;
label_1c1964:
    // 0x1c1964: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c196c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C196Cu;
    SET_GPR_U32(ctx, 31, 0x1C1974u);
    ctx->pc = 0x1C1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C196Cu;
    // 0x1c1970: 0x24a54a50  addiu       $a1, $a1, 0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C196Cu, 0x1C1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1974u;
label_1c1974:
    // 0x1c1974: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c1974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c197c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C197Cu;
    SET_GPR_U32(ctx, 31, 0x1C1984u);
    ctx->pc = 0x1C1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C197Cu;
    // 0x1c1980: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C197Cu, 0x1C1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1984u;
label_1c1984:
    // 0x1c1984: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1C1984u;
    SET_GPR_U32(ctx, 31, 0x1C198Cu);
    ctx->pc = 0x1C1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1984u;
    // 0x1c1988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1C1984u, 0x1C198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C198Cu;
label_1c198c:
    // 0x1c198c: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c198cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1994: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1998: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1998u;
    SET_GPR_U32(ctx, 31, 0x1C19A0u);
    ctx->pc = 0x1C199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1998u;
    // 0x1c199c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1998u, 0x1C19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19A0u;
label_1c19a0:
    // 0x1c19a0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c19a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c19a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19a8: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c19a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c19ac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C19ACu;
    SET_GPR_U32(ctx, 31, 0x1C19B4u);
    ctx->pc = 0x1C19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19ACu;
    // 0x1c19b0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C19ACu, 0x1C19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19B4u;
label_1c19b4:
    // 0x1c19b4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c19b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c19b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19bc: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c19c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c19c4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C19C4u;
    SET_GPR_U32(ctx, 31, 0x1C19CCu);
    ctx->pc = 0x1C19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19C4u;
    // 0x1c19c8: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C19C4u, 0x1C19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c19ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c19d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19d4: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C19D4u;
    SET_GPR_U32(ctx, 31, 0x1C19DCu);
    ctx->pc = 0x1C19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19D4u;
    // 0x1c19d8: 0x24a54a60  addiu       $a1, $a1, 0x4A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C19D4u, 0x1C19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19DCu;
label_1c19dc:
    // 0x1c19dc: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c19e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c19e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c19e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C19E8u;
    SET_GPR_U32(ctx, 31, 0x1C19F0u);
    ctx->pc = 0x1C19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19E8u;
    // 0x1c19ec: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C19E8u, 0x1C19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19F0u;
label_1c19f0:
    // 0x1c19f0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c19f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c19f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c19f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19f8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C19F8u;
    SET_GPR_U32(ctx, 31, 0x1C1A00u);
    ctx->pc = 0x1C19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19F8u;
    // 0x1c19fc: 0x24a54a50  addiu       $a1, $a1, 0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C19F8u, 0x1C1A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A00u;
}
