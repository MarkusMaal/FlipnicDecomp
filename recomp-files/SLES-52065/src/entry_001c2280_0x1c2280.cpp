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

// Function: entry_001c2280
// Address: 0x1c2280 - 0x1c2370
void entry_001c2280_0x1c2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2280_0x1c2280");
#endif

    ctx->pc = 0x1c2280u;

    // 0x1c2280: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x1c2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1c2284: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1c2284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c2288: 0x10430079  beq         $v0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1C2288u;
    {
        const bool branch_taken_0x1c2288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2288u;
        // 0x1c228c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2288) {
            ctx->pc = 0x1C2470u;
            return;
        }
    }
    ctx->pc = 0x1C2290u;
    // 0x1c2290: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1c2290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c2294: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1C2294u;
    {
        const bool branch_taken_0x1c2294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2294u;
        // 0x1c2298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2294) {
            ctx->pc = 0x1C2444u;
            return;
        }
    }
    ctx->pc = 0x1C229Cu;
    // 0x1c229c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c22a0: 0x10430069  beq         $v0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1C22A0u;
    {
        const bool branch_taken_0x1c22a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22A0u;
        // 0x1c22a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22a0) {
            ctx->pc = 0x1C2448u;
            return;
        }
    }
    ctx->pc = 0x1C22A8u;
    // 0x1c22a8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1c22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c22ac: 0x1043005a  beq         $v0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1C22ACu;
    {
        const bool branch_taken_0x1c22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22ACu;
        // 0x1c22b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22ac) {
            ctx->pc = 0x1C2418u;
            return;
        }
    }
    ctx->pc = 0x1C22B4u;
    // 0x1c22b4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1c22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c22b8: 0x10430056  beq         $v0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1C22B8u;
    {
        const bool branch_taken_0x1c22b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22B8u;
        // 0x1c22bc: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22b8) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C22C0u;
    // 0x1c22c0: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C22C0u;
    {
        const bool branch_taken_0x1c22c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22c0) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C22C8u;
    // 0x1c22c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c22cc: 0x10430051  beq         $v0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C22CCu;
    {
        const bool branch_taken_0x1c22cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22CCu;
        // 0x1c22d0: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22cc) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C22D4u;
    // 0x1c22d4: 0x1043004f  beq         $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C22D4u;
    {
        const bool branch_taken_0x1c22d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22d4) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C22DCu;
    // 0x1c22dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c22e0: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C22E0u;
    {
        const bool branch_taken_0x1c22e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22E0u;
        // 0x1c22e4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22e0) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C22E8u;
    // 0x1c22e8: 0x1043004a  beq         $v0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C22E8u;
    {
        const bool branch_taken_0x1c22e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22e8) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C22F0u;
    // 0x1c22f0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c22f4: 0x10430047  beq         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1C22F4u;
    {
        const bool branch_taken_0x1c22f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22F4u;
        // 0x1c22f8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22f4) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C22FCu;
    // 0x1c22fc: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C22FCu;
    {
        const bool branch_taken_0x1c22fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22fc) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2304u;
    // 0x1c2304: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c2308: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C2308u;
    {
        const bool branch_taken_0x1c2308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2308u;
        // 0x1c230c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2308) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2310u;
    // 0x1c2310: 0x10430040  beq         $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C2310u;
    {
        const bool branch_taken_0x1c2310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2310u;
        // 0x1c2314: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2310) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2318u;
    // 0x1c2318: 0x1046003e  beq         $v0, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C2318u;
    {
        const bool branch_taken_0x1c2318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2318u;
        // 0x1c231c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2318) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2320u;
    // 0x1c2320: 0x1043003c  beq         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C2320u;
    {
        const bool branch_taken_0x1c2320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2320u;
        // 0x1c2324: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2320) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2328u;
    // 0x1c2328: 0x1044003a  beq         $v0, $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C2328u;
    {
        const bool branch_taken_0x1c2328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2328u;
        // 0x1c232c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2328) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2330u;
    // 0x1c2330: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C2330u;
    {
        const bool branch_taken_0x1c2330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2330u;
        // 0x1c2334: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2330) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2338u;
    // 0x1c2338: 0x10500036  beq         $v0, $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C2338u;
    {
        const bool branch_taken_0x1c2338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2338u;
        // 0x1c233c: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2338) {
            ctx->pc = 0x1C2414u;
            return;
        }
    }
    ctx->pc = 0x1C2340u;
    // 0x1c2340: 0x10430050  beq         $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C2340u;
    {
        const bool branch_taken_0x1c2340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2340) {
            ctx->pc = 0x1C2484u;
            return;
        }
    }
    ctx->pc = 0x1C2348u;
    // 0x1c2348: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1c2348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c234c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C234Cu;
    {
        const bool branch_taken_0x1c234c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C234Cu;
        // 0x1c2350: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c234c) {
            ctx->pc = 0x1C23E8u;
            return;
        }
    }
    ctx->pc = 0x1C2354u;
    // 0x1c2354: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C2354u;
    {
        const bool branch_taken_0x1c2354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2354) {
            ctx->pc = 0x1C23A8u;
            return;
        }
    }
    ctx->pc = 0x1C235Cu;
    // 0x1c235c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c235cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2360: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2360u;
    {
        const bool branch_taken_0x1c2360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2360u;
        // 0x1c2364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2360) {
            ctx->pc = 0x1C2370u;
            return;
        }
    }
    ctx->pc = 0x1C2368u;
    // 0x1c2368: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C2368u;
    {
        const bool branch_taken_0x1c2368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2368u;
        // 0x1c236c: 0x8e230248  lw          $v1, 0x248($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2368) {
            ctx->pc = 0x1C2488u;
            return;
        }
    }
    ctx->pc = 0x1C2370u;
}
